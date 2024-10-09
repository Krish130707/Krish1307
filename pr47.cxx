#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
     // Number of rows to print

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1); 
        }
        printf("\n");
         // Move to the next line after each row
    }

    return 0;
}
