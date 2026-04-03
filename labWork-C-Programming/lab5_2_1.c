#include <stdio.h>
//done
int main() 
{
    int std[100][7],x;
    printf("\n Enter number of student: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
    printf("\n Enter seat number : ");
    scanf("%d",&std[i][0]);
    printf("\n Enter mark of CP : ");
    scanf("%d",&std[i][1]);
    printf("\n Enter mark  of CS : ");
    scanf("%d",&std[i][2]);
    printf("\n Enter mark of Maths : ");
    scanf("%d",&std[i][3]);
    printf("\n Enter mark of Physics : ");
    scanf("%d",&std[i][4]);
    std[i][5]=std[i][1]+std[i][2]+std[i][3]+std[i][4];
    std[i][6]=std[i][5]/4.0;
    printf("\n Total : %d",std[i][5]);
    printf("\n avrage : %f",(float)std[i][6]);
    }
    printf("\n\tseat no\t\tCP  \tCS  \tMaths\tPhysics\t\tTotal\tAvrage");
    for(int i=0;i<x;i++)
    printf("\n\t%d\t\t\t%d\t\t%d\t\t  %d\t\t %d\t\t%d\t\t%.2f",std[i][0],std[i][1],std[i][2],std[i][3],std[i][4],std[i][5],(float)std[i][6]);
}