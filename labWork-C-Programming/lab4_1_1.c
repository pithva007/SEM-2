#include <stdio.h>

int main()
{
    char ch;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            ch = 'A' + j - 1;  
            printf(" %c", ch);
        }
        printf("\n");
    }

    return 0;
}
