
#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, sum;
    float percentage;

    printf("Enter marks of five subjects:\n");

    printf("Subject 1: ");
    scanf("%d", &s1);

    printf("Subject 2: ");
    scanf("%d", &s2);

    printf("Subject 3: ");
    scanf("%d", &s3);

    printf("Subject 4: ");
    scanf("%d", &s4);

    printf("Subject 5: ");
    scanf("%d", &s5);

    sum = s1 + s2 + s3 + s4 + s5;

    percentage = (float)sum / 500 * 100;

    printf("Total Marks: %d\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Division: First\n");
    } else if (percentage >= 75) {
        printf("Division: Second\n");
    } else if (percentage >= 50) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
