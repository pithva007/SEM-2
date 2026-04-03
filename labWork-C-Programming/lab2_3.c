#include<stdio.h>
int main()
{
    int x,y;
    printf("first number : ");
    scanf("%d",&x);
    printf("second number : ");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("first number : %d\n",x);
    printf("second number : %d",y);

}