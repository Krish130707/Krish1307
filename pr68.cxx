#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    
    // Read first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0; // Initialize the result matrix
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
