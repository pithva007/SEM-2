#include <stdio.h>


int main()
{
  float X,Y,Z,clerks,teachers,principal;
  //teachers=y
  //clerks =X
  //principal=Z
  printf("Enter hour of clerk : ");
  scanf("%f",&X);
  printf("\nEnter hour of teacher : ");
  scanf("%f",&Y);
  printf("\nEnter hour of principle : ");
  scanf("%f",&Z);
  
   if (X<=44)
  { clerks=X*100;
    printf("clerks1= %f\n",clerks);
  }
  
   if (X>44 && X<=50)
  {
      clerks= 4400+2*100*(X-44);
      printf("clerks2= %f\n",clerks);
  }
  if(Y<=44)
  {
    teachers=Y*200;
    printf("teachers1= %f\n",teachers);
    
  }
  
   if(Y>44 && Y<=50)
  {
    teachers= 8800+2*200*(Y-44); 
    printf("teachers2= %f\n",teachers);
  }
  if(Z<=44)
  {
    principal=Z*400;
    printf("principal1= %f\n",principal);
  }
  
  if(Z>44 && Z<=50)
  {
    principal= 17200+2*400*(Z-44);
    printf("principal2= %f\n",principal);
  }
    return 0;
}