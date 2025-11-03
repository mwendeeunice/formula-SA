/*Name: Eunice Mwende
	Reg:CT100/G/26231/25
	*/
#include <stdio.h>

void while_loop_atm_withdrawal() {
    float balance = 1000.00; // Starting balance
    float withdrawal;

    printf("\n--- 2. While Loop: ATM Withdrawal System ---\n");
    printf("Initial Account Balance: %.2f KES\n", balance);

    // Loop continues as long as the balance is greater than 0
    while (balance > 0) {
        printf("\nCurrent Balance: %.2f KES\n", balance);
        printf("Enter amount to withdraw (or enter 0 to stop): ");
        
        // Read the amount to withdraw
        if (scanf("%f", &withdrawal) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while(getchar() != '\n'); 
            continue;
        }

        if (withdrawal <= 0) {
            printf("Transaction stopped by user.\n");
            break;
        }

        if (withdrawal > balance) {
            printf("Withdrawal of %.2f KES failed. Insufficient funds!\n", withdrawal);
        } else {
            balance -= withdrawal; // Process withdrawal
            printf("Withdrawal successful. Remaining Balance: %.2f KES\n", balance);
        }
        
        // Check if balance has been depleted
        if (balance <= 0) {
            printf("\nAccount balance is depleted. ATM session ended.\n");
        }
    }
}