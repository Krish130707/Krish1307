#include <stdio.h>
int main()
{
	int  p,r,t,i;
	printf("enter the value of principal amount: ");
	scanf("%d", &p);
	printf("enter the value of rate:  ");
	scanf("%d", &r);
	printf("enter the value of time in years:  ");
	scanf("%d", &t);
	i = (p*r*t)/100;
	printf("value of interest is %d", i);
	return 0;
	
}