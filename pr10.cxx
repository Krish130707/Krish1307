#include <stdio.h>

int main() {
    float M, P, C, E, CM;
    printf("Enter marks in Mathematics out of 200: ");
    scanf("%f", &M);
    
    printf("Enter marks in Physics out of 200: ");
    scanf("%f", &P);
    
    printf("Enter marks in Chemistry out of 200: ");
    scanf("%f", &C);
    
    printf("Enter marks in Entrance Examination out of 100: ");
    scanf("%f", &E);
    CM = (M / 2) + (P / 2) + (C / 2) + E;
   
    printf("The cut-off mark (CM) is: %.2f\n", CM);
    
    return 0;
}