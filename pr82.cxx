#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long nCr(int n, int r) {
    if (r > n) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    long long result = nCr(n, r);
    printf("C(%d, %d) = %lld\n", n, r, result);

    return 0;
}
