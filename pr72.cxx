#include <stdio.h>

void rotate(int a[], int n, int d) {
    // Normalize the number of rotations
    d = d % n;

    // Create a temporary array to hold the rotated values
    int temp[d];

    // Store the first d elements in the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = a[i];
    }

    // Shift the remaining elements to the front
    for (int i = 0; i < n - d; i++) {
        a[i] = a[i + d];
    }

    // Copy the elements from the temporary array back to the end of the original array
    for (int i = 0; i < d; i++) {
        a[n - d + i] = temp[i];
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int d;

    printf("Original array: ");
    printArray(a, n);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &d);

    rotate(a, n, d);

    printf("Rotated array: ");
    printArray(a, n);

    return 0;
}
