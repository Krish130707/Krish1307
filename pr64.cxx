#include <stdio.h>

int main() {
    int matrix[3][3];
    int row_sum[3] = {0};

    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row_sum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }

    return 0;
}
