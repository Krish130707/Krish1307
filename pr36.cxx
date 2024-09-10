#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("%d ", 2 * i + 1);
    }
    printf("\n");

    return 0;
}
