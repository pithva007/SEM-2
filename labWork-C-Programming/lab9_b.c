#include<stdio.h>

int main()
{
    int n;
    int *ptr;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int array[n];
    ptr = array;  

    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    printf("Reversed array is: ");
    ptr--; 

    for(int i = n; i > 0; i--)
    {
        printf("%d ", *ptr);  
        ptr--; 
    }

    printf("\n");
    return 0;
}
