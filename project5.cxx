#include <stdio.h>

int isFibonacci(int n) {
    int a = 0, b = 1, c;
//f(0)=a,f(1)=b,f(x)=c
    
    if (n == a || n == b) {
        return 1; // n is a Fibonacci number (0 or 1)
    }

    while (1) {
        c = a + b;
        if (c == n) {
            return 1; // n is a Fibonacci number
        }
        if (c > n) {
            return 0; // n is not a Fibonacci number
        }
        a = b;
        b = c;
    }
}

int main() {
    int T, N;

    // Read the number of test cases
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    // it will check if each num is fibo or not
    for (int i = 0; i < T; i++) {
        printf("Enter a number to check: ");
        scanf("%d", &N);
        if (isFibonacci(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
