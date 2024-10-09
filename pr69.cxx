#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, target, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    if (size <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }
    
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value to search for: ");
    scanf("%d", &target);
    
    result = linearSearch(arr, size, target);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result+1);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}
