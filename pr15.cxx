#include <stdio.h>

int main() 
{
    int marks[5];
    int i;
    float total = 0.0, average;
    printf("Enter the marks for five subjects:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = total / 5;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    
    if (average >= 80) {
        printf("Division: First Division\n");
    } else if (average >= 60) {
        printf("Division: Second Division\n");
    } else if (average >= 40) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
