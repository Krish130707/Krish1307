#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d", &num3);



    int max = num1;

    max = (num2 > max) ? num2 : max;
    max = (num3 > max) ? num3 : max;

    printf("The maximum number is: %d\n", max);

    return 0;
}