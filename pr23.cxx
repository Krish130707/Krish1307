#include <stdio.h>

int main() {
    double base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    if (exponent < 0) {
        printf("Error! Exponent should be a non-negative integer for this implementation.\n");
    } else {
        for (int i = 0; i < (int)exponent; ++i) {
            result *= base;
        }
        printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);
    }

    return 0;
}
