#include <stdio.h>

#define STUDENTS 10
#define SUBJECTS 3

int main() {
    int rollNo[STUDENTS];
    int marks[STUDENTS][SUBJECTS];
    int totalMarks[STUDENTS] = {0};
    int highestMarks[SUBJECTS] = {0};
    int highestStudent[SUBJECTS] = {0};
    int highestTotal = 0;
    int highestTotalStudent = 0;

    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter Roll No. for student %d: ", i + 1);
        scanf("%d", &rollNo[i]);

        printf("Enter marks for Subject 1, Subject 2, and Subject 3: ");
        for (int j = 0; j < SUBJECTS; j++) {
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j];

            if (marks[i][j] > highestMarks[j]) {
                highestMarks[j] = marks[i][j];
                highestStudent[j] = rollNo[i];
            }
        }

        if (totalMarks[i] > highestTotal) {
            highestTotal = totalMarks[i];
            highestTotalStudent = rollNo[i];
        }
    }

    printf("\nTotal marks obtained by each student:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Roll No: %d, Total Marks: %d\n", rollNo[i], totalMarks[i]);
    }

    printf("\nHighest marks in each subject:\n");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("Subject %d: %d (Roll No: %d)\n", j + 1, highestMarks[j], highestStudent[j]);
    }

    printf("\nStudent with highest total marks:\n");
    printf("Roll No: %d, Total Marks: %d\n", highestTotalStudent, highestTotal);

    return 0;
}
