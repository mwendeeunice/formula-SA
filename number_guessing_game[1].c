/*Name: Eunice Mwende
	Reg:CT100/G/26231/25
	*/
#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

void while_loop_guessing_game() {
    // Initialize random number generator using the current time
    srand(time(0)); 
    
    // Generate random number between 1 and 50 (inclusive)
    int secretNumber = (rand() % 50) + 1; 
    
    int guess = 0;
    int attempts = 0;

    printf("\n--- 3. While Loop: Number Guessing Game ---\n");
    printf("I have generated a secret number between 1 and 50.\n");

    // Loop continues until the correct guess is made
    while (guess != secretNumber) {
        printf("Enter your guess: ");
        
        // Input validation
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while(getchar() != '\n'); 
            continue;
        }

        attempts++; // Increment the attempt counter

        // Check the guess
        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            // guess == secretNumber
            printf("Congratulations!\n");
        }
    }

    // Display the total attempts after the loop ends
    printf("It took you a total of %d attempts to guess the number.\n", attempts);
}