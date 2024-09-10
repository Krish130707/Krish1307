#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;        // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10;                   // Remove the last digit from the original number
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
