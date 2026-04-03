#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int big=x[0],index=0;
    for(int i=1;i<n;i++)
    {
        if(x[i]>big)
        {
            big=x[i];
            index=i;
        }
    }
    printf("\nBiggest elemnet is %d \n",big);
    printf("and the index is %d",index);
}
