#include <stdio.h>

int main() {
    int number, i;
    
    
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    // Print the multiplication table for the given number
    printf("Multiplication table for %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}