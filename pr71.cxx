#include <stdio.h>

int findPivot(int a[], int low, int high) {
    if (low > high) return -1;
    if (low == high) return low;
    
    int mid = (low + high) / 2;

    if (mid < high && a[mid] > a[mid + 1])
        return mid + 1;
    
    if (mid > low && a[mid] < a[mid - 1])
        return mid;

    if (a[low] >= a[mid])
        return findPivot(a, low, mid - 1);

    return findPivot(a, mid + 1, high);
}

int main() {
    int n, i, pivot;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    pivot = findPivot(a, 0, n - 1);

    if (pivot == -1) {
        printf("The array is not rotated.\n");
    } else {
        printf("The pivot element is %d\n", a[pivot]);
    }

    return 0;
}9