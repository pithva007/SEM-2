#include <stdio.h>

int main() {
    float class_test, tutorial, se, lpw, see;
    float total_marks;

    // Prompt the user to enter marks for each component
    printf("Enter marks for Class Test (out of 100): \n");
    scanf("%f", &class_test);
    
    printf("Enter marks for Tutorial (out of 100): \n");
    scanf("%f", &tutorial);
    
    printf("Enter marks for SE (out of 100): \n");
    scanf("%f",&se);
    
    printf("Enter marks for LPW (out of 100): \n");
    scanf("%f", &lpw);
    
    printf("Enter marks for SEE (out of 100): \n");
    scanf("%f", &see);

    // Calculate the total marks with weightages
    total_marks = (class_test * 0.12) + (tutorial * 0.12) + (se * 0.16) + 
                  (lpw * 0.20) + 
                  (see * 0.40);

    // Determine the grade using simple conditional checks
    const char* grade; 

    if (total_marks >= 91) {
        grade = "A+";
    } else if (total_marks >= 81) {
        grade = "A";
    } else if (total_marks >= 71) {
        grade = "B+";
    } else if (total_marks >= 61) {
        grade = "B";
    } else if (total_marks >= 51) {
        grade = "C+";
    } else if (total_marks >= 40) {
        grade = "C";
    } else {
        grade = "Fail";
    }

    // Display the results after all conditions
    printf("Total weighted marks: %.2f\n", total_marks);
    printf("Grade: %s\n", grade);

    return 0;
}
