#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    while (sum >= 10) {
        int temp = sum;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
    }

    printf("Single-digit sum of digits: %d\n", sum);

    return 0;
}
