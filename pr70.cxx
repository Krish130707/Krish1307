#include <stdio.h>

int main() {
    int n, i, search, count = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];  
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            count++;
        }
    }
    if (count > 0) {
        printf("Element %d occurs %d time(s) in the array.\n", search, count);
    } else {
        printf("Element %d is not present in the array.\n", search);
    }

    return 0;
}