#include<stdio.h>
#include<string.h>

void concatenate (char s1[], char s2[],char result[])
{
     while (*s1 != '\0') {
        *result = *s1;
        s1++;
        result++;
    }
    *result=' ';
    result++;
    while (*s2 != '\0') {
        *result = *s2;
        s2++;
        result++;
    }
    *result = '\0';

}
int main()
{
    char s1[100], s2[100], result[200];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);    
    concatenate(s1,s2,result);
    printf("concatenate string is : %s",result);
    return 0;

}