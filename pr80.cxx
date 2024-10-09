#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    generateFibonacci(5);
    generateFibonacci(10);
    generateFibonacci(15);
    
    return 0;
}
