#include<stdio.h>

int main()
{
    float bas,net_sal,da,hra,med,pf,insu,dedu,gross_sal;
    scanf("%f",&bas);
    printf(" Basic salary : %.2f",bas);
    da = 0.5 * bas ;
    hra = 0.1 * bas;
    med = 0.04 * bas; 
    gross_sal = bas + da + hra + med;
    pf = 0.05 * gross_sal;
    insu = 0.07 * gross_sal;
    dedu = insu + pf;
    net_sal= gross_sal - dedu;
    printf("\n Net salary to pay is : %.2f",gross_sal);
    printf("\n Net salary to pay is : %.2f",net_sal);
}