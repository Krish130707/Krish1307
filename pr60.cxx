#include <stdio.h>

void selection_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

int main() {
    int a[10];
    printf("Enter 10 values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    selection_sort(a, 10);
    printf("Sorted array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
