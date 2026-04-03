#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct student
{
    char dob[10];
    char roll[20];
    char name[20];
    char pnum[20];
    char gender[10];
    char add[50];
    
};
void add();
void search();
void view();
void edit();
void delete();
void modify();
void menuadm();
void menustd();
void menu();
void menuadm()
{
    do {
        printf("\n\n1.Add data of student ");
        printf("\n2.search data of student ");
        printf("\n3.viwe all data of student "); 
        printf("\n4.Edit data of student ");
        printf("\n5.Delete data of student ");
        printf("\n6.Exit ");
        int choice;
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                add();
                break;
            case 2:
                search();
                break;
            case 3:
                view();
                break;
            case 4:
                edit();
                break;
            case 5:
                delete();
                break;
            case 6:
                exit(0);
                break;
            default :
                printf("Invalid choice . please try again\n");
        }
    }while(1);

}
void menu()
{
    top:
    printf("For student press 1");
    printf("For admin press 2");
    int j;
    scanf("%d",&j);
    if(j==1)
    {
        menustd();
    }
    else if(j==2)
    {
        long pass=77789;
        lable :
        printf("\nPlease enter the password : ");
        scanf("%ld",&pass);
        if(pass==77789)
        {
            menuadm();
        }
        else{
            system("cls");
            printf("Wrong password!! \n");
            printf("Try again ");
            goto lable;
        }
    }else{
        printf("please press between 1 and 2");
        goto top;
    } 
}
void menustd()
{
    
    printf("\n\nAdd data of student ");
    struct student s;
    printf("\nEnter roll number of student : ");
    scanf(" %[^\n]", s.roll);
    getchar();
    printf("Enter name of student : ");
    scanf(" %[^\n]", s.name);
    getchar();
    printf("Enter your gender : ");
    scanf(" %[^\n]", s.gender);
    getchar();
    printf("Enter date of birth : ");
    scanf(" %[^\n]", s.dob);
    getchar();
    printf("Enter phone number  : ");
    scanf(" %[^\n]", s.pnum);
    getchar();
    printf("Enter adress : ");
    scanf(" %[^\n]", s.add);
    getchar();
    FILE *pf;
    pf=fopen("data.txt","a");
    fwrite(&s,sizeof(struct student),1,pf);
    fclose(pf);   
    system("cls");
    printf("press any key continue ");
    char ch;
    scanf("%c",&ch);
    if(ch !='\0')
    {
        system("cls");
        menu();
    }
       

}
void add()
{
    struct student s;
    printf("\nEnter roll number of student : ");
    scanf(" %[^\n]", s.roll);
    getchar();
    printf("Enter name of student : ");
    scanf(" %[^\n]", s.name);
    getchar();
    printf("Enter your gender : ");
    scanf(" %[^\n]", s.gender);
    getchar();
    printf("Enter date of birth : ");
    scanf(" %[^\n]", s.dob);
    getchar();
    printf("Enter phone number  : ");
    scanf(" %[^\n]", s.pnum);
    getchar();
    printf("Enter adress : ");
    scanf(" %[^\n]", s.add);
    getchar();
    FILE *pf;
    pf=fopen("data.txt","a");
    fwrite(&s,sizeof(struct student),1,pf);
    fclose(pf);   
    system("cls");
    printf("press any key continue ");
    char ch;
    scanf("%c",&ch);
    if(ch !='\0')
    {
        system("cls");
        menu();
    }

}
void view()
{
    struct student s;
    FILE *pf;
    pf = fopen("data.txt","r");
    while(fread(&s, sizeof(struct student ),1,pf))
    {
        printf("Name: %s\n",s.name);
        printf("Roll No: %s\n",s.roll);
        printf("Gender: %s\n",s.gender);
        printf("Date of Birth: %s\n",s.dob);
        printf("Phone Number: %s\n",s.pnum);
        printf("Address: %s\n\n",s.add);
        fclose(pf);
        printf("press any key continue ");
        char ch;
        scanf("%c",&ch);
        if(ch !='\0')
        {
            system("cls");
            menu();
        }
    }
}
void search()
{
    struct student s;
    FILE *pf;
    pf = fopen("data.txt","r");
    char rollnum[20];
    scanf(" %[^\n]", rollnum);
    getchar();
    while(fread(&s, sizeof(struct student ),1,pf))
    {
        if(strcmp(rollnum,s.roll)==0)
        {
            printf("Name: %s\n",s.name);
            printf("Roll No: %s\n",s.roll);
            printf("Gender: %s\n",s.gender);
            printf("Date of Birth: %s\n",s.dob);
            printf("Phone Number: %s\n",s.pnum);
            printf("Address: %s\n\n",s.add);
            fclose(pf);
            printf("press any key continue ");
            char ch;
            scanf("%c",&ch);
            if(ch !='\0')
            {
                system("cls");
                menu();
            }
        }
    }
}
void delete()
{
    struct student s;
    FILE *pf, *tempFile;
    char rollnum[20];
    printf("Enter the roll number of the student to delete: ");
    scanf(" %[^\n]", rollnum);
    pf = fopen("data.txt", "r");
    int found = 0;
    while (fread(&s, sizeof(struct student), 1, pf)) 
    {
        if (strcmp(s.roll, rollnum) != 0) 
        {
            fwrite(&s, sizeof(struct student), 1, tempFile);
        } else 
        {
            found = 1;
        }
    }

    fclose(pf);
    fclose(tempFile);

    if (found) 
    {
        printf("Student with roll number %s has been deleted.\n", rollnum);
        remove("data.txt");
        rename("temp.txt", "data.txt");
    } else {
        printf("No student found with roll number %s.\n", rollnum);
    } 
    printf("press any key continue ");
    char ch;
    scanf("%c",&ch);
    if(ch !='\0')
    {
        menu();
    }

}
void medit()
{
   
    FILE *fp;
    struct student s;
    system("cls");
    printf("\nEnter roll number of student : ");
    scanf(" %[^\n]", s.roll);
    fp = fopen("data.txt","rb+");
    printf("\nEnter roll number of student : ");
    scanf(" %[^\n]", s.roll);
    getchar();
    printf("Enter name of student : ");
    scanf(" %[^\n]", s.name);
    getchar();
    printf("Enter your gender : ");
    scanf(" %[^\n]", s.gender);
    getchar();
    printf("Enter date of birth : ");
    scanf(" %[^\n]", s.dob);
    getchar();
    printf("Enter phone number  : ");
    scanf(" %[^\n]", s.pnum);
    getchar();
    printf("Enter adress : ");
    scanf(" %[^\n]", s.add);
    getchar();
    printf("press any key continue ");
    char ch;
    scanf("%c",&ch);
    if(ch !='\0')
    {
        system("cls");
        menu();
    }

}
int main()
{
    printf("Welcome to student management portal \n");
    printf("press any key continue ");
    char ch;
    scanf("%c",&ch);
    if(ch !='\0')
    {
        system("cls");
        menu();
    }
    return 0;
}
