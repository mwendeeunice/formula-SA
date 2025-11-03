

#include <stdio.h>

int main() {
    // Variables for user data
    float height_meters, weight_kg;
    char phone_number[15];

    // Display title
    printf("--- User Information Entry ---\n\n");

    // Prompt user for height
    printf("Enter height in meters: ");
    scanf("%f", &height_meters);

    // Prompt user for weight
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight_kg);

    // Clear the input buffer to prevent issues
    while (getchar() != '\n');

    // Prompt user for phone number
    printf("Enter phone number: ");
    scanf("%14[^\n]s", phone_number);

    // Display user details
    printf("\n--- Your Details ---\n");
    printf("Height: %.2f m\n", height_meters);
    printf("Weight: %.2f kg\n", weight_kg);
    printf("Phone: %s\n", phone_number);
    printf("--------------------\n");

    return 0;
}
assign 2.c
Displaying semester units 1.c.