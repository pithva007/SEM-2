#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int id;
    float bas_sal;
    float da;
    float hra;
    double tot_sal;
};

int main() {
    struct employee e[3];
    printf("Enter details for 3 employees:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", e[i].name); 
        printf("Enter ID: ");
        scanf("%d", &e[i].id);
        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].bas_sal);
        printf("Enter DA percentage: ");
        scanf("%f", &e[i].da);
        printf("Enter HRA percentage: ");
        scanf("%f", &e[i].hra);
    }

    // Calculate total salary
    for (int i = 0; i < 3; i++) {
        float da = (e[i].bas_sal * e[i].da) / 100;
        float hra = (e[i].bas_sal * e[i].hra) / 100;
        e[i].tot_sal = e[i].bas_sal + da + hra;
    }

    int choice;
    printf("\nEnter your choice:\n1. Display Employee Details\n2. Display Employee with Maximum Salary\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int emp_num;
            printf("Enter the employee number (1-3) you want to see: ");
            scanf("%d", &emp_num);

            if (emp_num < 1 || emp_num > 3) {
                printf("\nInvalid employee number! Please enter a number between 1 and 3.\n");
            } else {
                int i = emp_num - 1; // Adjust for 0-based indexing
                printf("\nEmployee %d:\n", emp_num);
                printf("Name: %s\n", e[i].name);
                printf("ID: %d\n", e[i].id);
                printf("Basic Salary: %.2f\n", e[i].bas_sal);
                printf("DA Percentage: %.2f%%\n", e[i].da);
                printf("HRA Percentage: %.2f%%\n", e[i].hra);
                printf("Total Salary: %.2f\n", e[i].tot_sal);
            }
            break;
        }

        case 2: {
            int j = 0;
            float max = e[0].tot_sal;
            for (int i = 1; i < 3; i++) {
                if (e[i].tot_sal > max) {
                    max = e[i].tot_sal;
                    j = i;
                }
            }
            printf("\nThe employee with the maximum salary is:\n");
            printf("Name: %s\n", e[j].name);
            printf("ID: %d\n", e[j].id);
            printf("Maximum Salary: %.2f\n", max);
            break;
        }

        default:
            printf("\nInvalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
