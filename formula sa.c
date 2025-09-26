/*
    Name:Eunice Mwende
    Reg:CT100/G/26231/25
    Description:Surface area Formula
*/

#include <stdio.h>

int main() {
    int age, income;

    printf("--- Loan Check ---\n");
    
    // Get Age
    printf("Enter age: ");
    scanf("%d", &age);

    // Get Income
    printf("Enter annual income (Shillings): ");
    scanf("%d", &income);

    // Check Eligibility: Age >= 21 AND Income >= 21000
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations, you qualify for a loan.\n");
    } else {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;

}
