#include <stdio.h>
#include <stdbool.h>

#define SIZE_COUNT 6

// Multidimensional arrays to store sizes and their corresponding circumferences
float hatSizes[SIZE_COUNT][2] = {
    {6.5, 20.5},  // Size 6 1/2
    {6.75, 21.0}, // Size 6 3/4
    {7.0, 21.5},  // Size 7
    {7.25, 22.0}, // Size 7 1/4
    {7.5, 22.5},  // Size 7 1/2
    {7.75, 23.0}  // Size 7 3/4
};

void determineHatSize(float circumference) {
    for (int i = 0; i < SIZE_COUNT; i++) {
        if (circumference < hatSizes[i][1]) {
            printf("Your hat size is: %.2f\n", hatSizes[i][0]);
            return;
        }
    }
    printf("Circumference too large for available sizes.\n");
}

int main() {
    float circumference;
    bool validInput = false;

    printf("Welcome to the Hat Size Calculator!\n");
    while (!validInput) {
        printf("Enter your head circumference in inches (e.g., 22.0): ");
        if (scanf("%f", &circumference) == 1 && circumference > 0) {
            validInput = true;
        } else {
            printf("Invalid input. Please enter a positive number.\n");
            while(getchar() != '\n'); 
            // Clear invalid input
        }
    }

    determineHatSize(circumference);
    return 0;
}
