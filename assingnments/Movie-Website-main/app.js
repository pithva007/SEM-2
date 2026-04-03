//step 1: get DOM
let nextDom = document.getElementById('next');
let prevDom = document.getElementById('prev');

let carouselDom = document.querySelector('.carousel');
let SliderDom = carouselDom.querySelector('.carousel .list');
let thumbnailBorderDom = document.querySelector('.carousel .thumbnail');
let thumbnailItemsDom = thumbnailBorderDom.querySelectorAll('.item');
let timeDom = document.querySelector('.carousel .time');


thumbnailBorderDom.appendChild(thumbnailItemsDom[0]);
let timeRunning = 2000;

nextDom.onclick = function(){
    showSlider('next');    
}

prevDom.onclick = function(){
    showSlider('prev');    
}
let runTimeOut;
function showSlider(type){
    let  SliderItemsDom = SliderDom.querySelectorAll('.carousel .list .item');
    let thumbnailItemsDom = document.querySelectorAll('.carousel .thumbnail .item');
    
    if(type === 'next'){
        SliderDom.appendChild(SliderItemsDom[0]);
        thumbnailBorderDom.appendChild(thumbnailItemsDom[0]);
        carouselDom.classList.add('next');

        
    }else{
        SliderDom.prepend(SliderItemsDom[SliderItemsDom.length - 1]);
        thumbnailBorderDom.prepend(thumbnailItemsDom[thumbnailItemsDom.length - 1]);
        carouselDom.classList.add('prev');

    }
    clearTimeout(runTimeOut);
    runTimeOut = setTimeout(() => {
        carouselDom.classList.remove('next');
        carouselDom.classList.remove('prev');
    }, timeRunning);

}
let currentSlide = 0;
const mainItems = document.querySelectorAll('.list .item');
const thumbItems = document.querySelectorAll('.thumbnail .item');
const carouselList = document.querySelector('.list');

function showSlide(index) {
    // Hide all videos
    document.querySelectorAll('.vid-box').forEach(vid => {
        vid.style.display = 'none';
        vid.querySelector('video').pause();
    });

    // Update active class
    thumbItems[currentSlide].classList.remove('active');
    currentSlide = index;
    thumbItems[currentSlide].classList.add('active');

    // Scroll to selected slide
    const itemWidth = mainItems[0].offsetWidth;
    carouselList.scrollTo({
        left: itemWidth * index,
        behavior: 'smooth'
    });
}

// Initialize first thumbnail as active
thumbItems[0].classList.add('active');

// Add arrow button functionality
document.getElementById('prev').addEventListener('click', () => {
    const newIndex = currentSlide > 0 ? currentSlide - 1 : mainItems.length - 1;
    showSlide(newIndex);
});

document.getElementById('next').addEventListener('click', () => {
    const newIndex = currentSlide < mainItems.length - 1 ? currentSlide + 1 : 0;
    showSlide(newIndex);
});
