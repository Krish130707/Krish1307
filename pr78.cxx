#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int original = number;
    int sum = 0;
    int digits = 0;

    while (original > 0) {
        original /= 10;
        digits++;
    }

    original = number;

    while (original > 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    return sum == number;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
