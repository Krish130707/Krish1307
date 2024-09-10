#include <stdio.h>

int main() {
    int n, i;
    int num, max = -2147483648, second_max = -2147483648;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            max = num;
        } else if (num > second_max && num < max) {
            second_max = num;
        }
    }

    if (n < 2) {
        printf("Not enough numbers to determine second maximum.\n");
    } else {
        printf("Maximum: %d\n", max);
        printf("Second Maximum: %d\n", second_max);
    }

    return 0;
}
