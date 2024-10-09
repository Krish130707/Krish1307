#include <stdio.h>

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}
