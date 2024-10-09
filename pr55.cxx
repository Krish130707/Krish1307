#include <stdio.h>

int main() {
    int a[10], oddCount = 0, totalSum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        totalSum += a[i];
        if (a[i] % 2 != 0) {
            oddCount++;
        }
    }
    printf("Total odd numbers: %d\n", oddCount);
    printf("Total sum of elements: %d\n", totalSum);
    return 0;
}
