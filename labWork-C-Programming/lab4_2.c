#include <stdio.h>

int main()
{
    int n,dv,temp=0;
    printf("\n Enter any number : ");
    scanf("%d",&n);
    for(dv=2;dv<n;dv++)
    {
        if(n%dv==0)
        {
            printf("\n given number is not prime number ");
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
        printf("\n Number is prime number ");
    }
    else
    {
        printf("\n number is not prime number ");
    }
}
