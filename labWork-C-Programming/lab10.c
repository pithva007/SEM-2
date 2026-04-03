#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckString(char *filename, char *string){
    char temp[100];
    FILE *file = fopen(filename, "r");
    if(file == NULL){
        perror("Error opening file");
        exit(1);
    }
    while(fgets(temp, sizeof(temp), file)){
        temp[strcspn(temp, "\n")] = '\0';
        if (strcmp(temp, string) == 0) {
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}

int main(){

    char strings[100][100];
    int count = 0;

    FILE *f1,*f2,*f3;
    f1 = fopen("1.txt","r");
    if(f1 == NULL){
        perror("Error opening file 1.txt");
        exit(1);
    }
    while(fgets(strings[count], sizeof(strings[count]), f1)){
        strings[count][strcspn(strings[count],"\n")] = '\0';
        count++;
    }
    fclose(f1);

    f2 = fopen("2.txt","r");
    if(f2 == NULL){
        perror("Error opening file 2.txt");
        exit(1);
    }
    char temp[100];
    while(fgets(temp, sizeof(temp), f2)){
        temp[strcspn(temp, "\n")] = '\0';
        bool flag = true;
        for(int i = 0; i < count; i++) {
            if(strcmp(strings[i], temp) == 0) {
                flag = false;
                break;
            }
        }
        if(flag){
            strcpy(strings[count], temp);
            count++;
        }
    }

    fclose(f2);

    f3 = fopen("3.txt","r");
    if(f3 == NULL){
        perror("Error opening file 3.txt");
        exit(1);
    }
    while(fgets(temp, sizeof(temp), f3)){
        temp[strcspn(temp, "\n")] = '\0';
        bool flag = true;
        for(int i = 0; i < count; i++) {
            if(strcmp(strings[i], temp) == 0) {
                flag = false;
                break;
            }
        }
        if(flag){
            strcpy(strings[count], temp);
            count++;
        }
    }
    fclose(f3);

    FILE * opf;
    opf = fopen("Output.txt","w");
    if(opf == NULL){
        perror("Error opening file 3.txt");
        exit(1);
    }
    fprintf(opf, "Strings\t1.txt\t2.txt\t3.txt\n");
    for(int i = 0; i < count; i++){
        int inFile1 = CheckString("1.txt", strings[i]);
        int inFile2 = CheckString("2.txt", strings[i]);
        int inFile3 = CheckString("3.txt", strings[i]);
        fprintf(opf, "%s\t  %d\t\t%d\t\t%d\n", strings[i], inFile1, inFile2, inFile3);
    }
    fclose(opf);
    
    return 0;
}