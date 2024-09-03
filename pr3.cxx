#include <stdio.h>
int main()
{
	int gross,basic,other,hra;
    printf("enter your basic salary: ");
	scanf("%d", &basic);
	printf("enter your house rent allowance:  ");
	scanf("%d", &hra);
	printf("enter your other allowance:  ");
	scanf("%d", &other);
	gross = basic+hra+other;
	printf("your gross income is %d", gross);
	return 0;
	
}