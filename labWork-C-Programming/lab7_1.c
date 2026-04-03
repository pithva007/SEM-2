#include<stdio.h>

int number(int n)
{
    int rupee[9]={500,200,100,50,20,10,5,2,1};
    int rem=n,ans=n,count=0;
    for(int i=0;i<9;i++)
    {
        ans=rem/rupee[i];
        rem=rem%rupee[i];
        count=count+ans;
        if(ans!=0)
        {
            printf("Number of %d notes is %d\n",rupee[i],ans);
        }
    }  
    printf("Minimun number of required notes : %d",count);  
}
int main()
{
    long n;
    scanf("%ld",&n);
    number(n);
}