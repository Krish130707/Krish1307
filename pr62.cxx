#include <stdio.h>

void reverse_array(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main() {
    int a[10];
    printf("Enter 10 values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    reverse_array(a, 10);
    printf("Reversed array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
