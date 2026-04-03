#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
    char name[100], ch;
    int count,temp=0;  
    printf("Enter your name : ");
    gets(name);
    for (int k = 0; name[k] != '\0'; k++) {
        name[k] = tolower(name[k]);
    }
    for(char i='a';i<='z';i++)
    {
        count = 0;
        for(int j=0; j<strlen(name); j++){
            if(name[j]==i){
                count++;
            }
        }
        if(count>1)
        {
            printf("\n%c is repeating %d times", i, count);
            temp=1;
        }
    }
    if(temp==0)
    {
        printf("\nNone of the character are repeating");
    }
}