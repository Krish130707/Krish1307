#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) {
    char *temp; // Temporary pointer for swapping

    // Bubble sort logic for strings using pointers
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap strings if they are in the wrong order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char *arr[n]; // Array of string pointers
    char buffer[100]; // Temporary buffer for input

    // Input strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", buffer);             // Read a string into the buffer
        arr[i] = strdup(buffer);         // Dynamically allocate memory and copy the string
    }

    // Sort the strings
    sortStrings(arr, n);

    // Print the sorted strings
    printf("Strings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]); // Free dynamically allocated memory
    }

    return 0;
}
