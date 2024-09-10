#include <stdio.h>

double computeY(double x, int n) {
    double Y;

    if (n == 1) {
        Y = 1 + x;
    } else if (n == 2) {
        Y = 1 + x / 2.0;
    } else if (n == 3) {
        Y = 1 + x;
    } else if (n > 3 || n < 1) {
        Y = 1 + n * x;
    } else {
        Y = 0; 
    }

    return Y;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    double result = computeY(x, n);
    printf("The value of Y(%f, %d) is: %f\n", x, n, result);

    return 0;
}
