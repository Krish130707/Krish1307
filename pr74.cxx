#include <stdio.h>

void mergeSortedArrays(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < sizeA) {
        C[k++] = A[i++];
    }

    while (j < sizeB) {
        C[k++] = B[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int C[sizeA + sizeB];

    mergeSortedArrays(A, sizeA, B, sizeB, C);

    printf("Merged array: ");
    printArray(C, sizeA + sizeB);

    return 0;
}
