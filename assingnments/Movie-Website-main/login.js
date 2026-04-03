function openModal(type) {
    if (type === 'login') {
        document.getElementById('loginModal').classList.remove('hidden');
    } else {
        document.getElementById('signupModal').classList.remove('hidden');
    }
}
function closeModal(type) {
    if (type === 'login') {
        document.getElementById('loginModal').classList.add('hidden');
    } else {
        document.getElementById('signupModal').classList.add('hidden');
    }
}

// Validation Functions
function validateLogin() {
    const username = document.getElementById("loginUsername").value.trim();
    const password = document.getElementById("loginPassword").value.trim();

    if (username === "" || password === "") {
        alert("Please fill in all fields.");
        return false;
    }

    // Simulate login success
    alert("Logged in successfully!");
    closeModal('login');
    return false;
}

function validateSignup() {
    const username = document.getElementById("signupUsername").value.trim();
    const email = document.getElementById("signupEmail").value.trim();
    const password = document.getElementById("signupPassword").value.trim();
    const confirmPassword = document.getElementById("confirmPassword").value.trim();

    if (!username || !email || !password || !confirmPassword) {
        alert("Please fill in all fields.");
        return false;
    }

    if (password !== confirmPassword) {
        alert("Passwords do not match.");
        return false;
    }

    // Simulate signup success
    alert("Signed up successfully!");
    closeModal('signup');
    return false;
}