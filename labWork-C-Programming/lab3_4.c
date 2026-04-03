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
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number correctly!\n");
        }
        
    } while (guess != secret_number);
    return 0;
}
