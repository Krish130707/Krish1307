#include <stdio.h>

int main() {
    int a[10], b[10], sum[10];
    printf("enter first array\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("enter second array\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++) {
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}
