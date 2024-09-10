#include <stdio.h>

int main() {
    int N, i, isPrime = 1;

    scanf("%d", &N);

    if (N <= 1) {
        printf("Composite\n");
        return 0;
    }

    for (i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Composite\n");
    }

    return 0;
}
