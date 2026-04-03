#include <stdio.h>
#include <string.h>


int main() {
    char line[100], removechar;
    int j = 0;

    printf("Enter the string : ");
    gets(line);  

    printf("\nEnter the character to remove : ");
    scanf("%c", &removechar);

    for (int i = 0; line[i] !='\0'; i++) {
        if (line[i] != removechar) {
            line[j++] = line[i];
        }
    }
    line[j] = '\0';  
    
    printf("\nUpdated string : %s\n", line);

    return 0;
}
