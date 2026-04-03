//multiplication**

#include <stdio.h>
int main() 
{
    int a[3][3],b[3][3],i,j,c[3][3];
    printf("\n Enter value for first matrix  \n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {          
            printf("\t");
            scanf("\t%d",&a[i][j]);
        }
    printf("\n");

    }
    printf("\n Enter value for second matrix  ");
    printf("\n");
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {          
            printf("\t");
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("\n multiply of two matrix");
    printf("\n");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++){
                int sum = 0;
                for(int k=0;k<3;k++)
                {
                    sum= sum + (a[i][k]*b[k][j]);
                    
                }
                c[i][j] =  sum;
            }
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        printf("\t[%d\t%d\t%d]\t\t\t[%d\t%d\t%d]",a[i][0],a[i][1],a[i][2],b[i][0],b[i][1],b[i][2]);
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        printf("\t[%d\t%d\t%d]",c[i][0],c[i][1], c[i][2]);
    }
}
