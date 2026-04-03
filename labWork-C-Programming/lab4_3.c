#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    int min = 1, max = 100;
    
    srand(time(NULL));
    
    secret_number = rand() % (max - min + 1) ;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between %d and %d.\n", min, max);
    
    for(int i=0;i<=4;i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        if (guess < secret_number) {
            printf("Smaller \n");
        } else if (guess > secret_number) {
            printf("Greater \n");
        }
         else if(guess==secret_number)
        {
            printf("\nCorrect");
            break;
        }
    }
    if(guess!=secret_number)
        printf("\n Sorry!!!");
}