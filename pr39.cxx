#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += (float)i / factorial(i);
    }

    printf("Sum of the series: %.6f\n", sum);

    return 0;
}