#include <stdio.h>



int main() {
    int num[10];
    int sum = 0;
    int i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("Sum of numbers: %d\n", sum);

    return 0;
}