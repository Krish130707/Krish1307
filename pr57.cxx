#include <stdio.h>

int main() {
    int n, max, secondMax;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = secondMax = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            secondMax = max;
            max = a[i];
        } else if (a[i] > secondMax && a[i] < max) {
            secondMax = a[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Second Max: %d\n", secondMax);
    return 0;
}
