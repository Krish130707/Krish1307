#include <stdio.h>

int main() {
    int a[10], numofpositive = 0, numofnegative = 0, zeroCount = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            numofpositive++;
        } else if (a[i] < 0) {
            numofnegative++;
        } else {
            zeroCount++;
        }
    }
    printf("Positive numbers: %d\n",numofpositive);
    printf("Negative numbers: %d\n", numofnegative);
    printf("Zeros: %d\n", zeroCount);
    return 0;
}
