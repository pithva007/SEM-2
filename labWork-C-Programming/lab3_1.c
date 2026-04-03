#include<stdio.h>
#include<math.h>


int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("\nEnter the value of B : ");
    scanf("%d",&b); 
    printf("\nEnter the value of C : ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d<0){
        printf("\nEquation has no real root");
    }
    else if(d==0)
    {
        printf("\nEquation has only one root");
        x1=(-b)/(2*a);
        x2=x1;
        printf("\n root is %.2f",x1);
    }
    else
    {
        printf("\nEquation has two real root");
        x1=((-b)+pow(d,0.5))/2*a;
        x1=((-b)-pow(d,0.5))/2*a;
        printf("\n first root is %.2f",x1);
        printf("\n second root is %.2f",x2);
    }

}