#include <stdio.h>

int main() {
    int n, i, num;
    int max, min;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of integers.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    scanf("%d", &num);
    max = min = num;

    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
