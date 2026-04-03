#include<stdio.h>
int main()
{
    int n,m,temp;
    scanf("%d",&n);
    scanf("%d",&m);
    temp=n;
    n=m;
    m=temp;
    printf("%d\n",n);
    printf("%d",m);
}