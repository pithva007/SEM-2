#include<stdio.h>

struct complex {
    float re, im;
};


int main() {
    struct complex num[2];
    float sum_re, sum_im;

    printf("Enter real part of first number: ");
    scanf("%f", &num[0].re);
    printf("Enter imaginary part of first number: ");
    scanf("%f", &num[0].im);

    printf("Enter real part of second number: ");
    scanf("%f", &num[1].re);
    printf("Enter imaginary part of second number: ");
    scanf("%f", &num[1].im);

    sum_re = num[0].re + num[1].re;
    sum_im = num[0].im + num[1].im;

    printf("The sum of the two complex numbers is %.2f + %.2fj\n", sum_re, sum_im);

    return 0;
}