#include <stdio.h> 

int main()
{
int x;
printf("enter the value of x : "); scanf("%d",&x);
if(x%10==0)
{
printf("\nyou win in zero turn"); }
else if(x%5==0){
printf("\n you win in one turn");
 
} else {
printf("\n it may be impossible"); }
return 0; }