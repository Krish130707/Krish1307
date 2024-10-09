#include <stdio.h>

int main() {
    int a[10], b[10];
     printf("enter first array\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("enter second array\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
