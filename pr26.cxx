#include <stdio.h>

int main() {
    int N, i;
    int sumOdd = 0, sumEven = 0;

    // Prompt user to enter the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the sum of odd and even numbers
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    // Print the results
    printf("Sum of even numbers between 1 and %d is: %d\n", N, sumEven);
    printf("Sum of odd numbers between 1 and %d is: %d\n", N, sumOdd);

    return 0;
}
