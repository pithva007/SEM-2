#include<stdio.h>


int fofn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1) 
    {
        return 1;
    }
     else 
    {
        return fofn(n - 1) + fofn(n - 2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fofn(n);
    printf("F(%d) = %d\n", n, fofn(n));

}