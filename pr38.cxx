#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i * i);
    }
    printf("\n");

    return 0;
}
