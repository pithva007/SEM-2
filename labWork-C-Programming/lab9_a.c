#include<stdio.h>
void m2DArray(int *arr, int n, int m) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int *ptr = arr + (i * m) + j;
            
            if (*ptr % 2 == 0) 
            {
                *ptr += 2;  
            } else 
            {
                *ptr += 1;  
            }
        }
    }
}
void m1DArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            *(arr + i) += 2;  
        } else {
            *(arr + i) += 1;  
        }
    }
}
int main()
{
    
    int choice;
    printf("press 1 for 1D array.\n");
    printf("press 2 for 2D array.\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        int n;
        printf("Enter the size of the array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        m1DArray(arr, n);

        printf("Modified array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    if(choice ==2)
    {
        int n, m;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Enter the elements of the array (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    m2DArray((int *)arr, n, m);

    printf("Modified 2D array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    }    
}