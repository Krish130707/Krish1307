#include <stdio.h>
int main()
{
	int e,c,p,ch,m,total,percentage;
	printf("enter the marks of english: ");
	scanf("%d", &e);
	printf("enter the marks of computer:  ");
	scanf("%d", &c);
	printf("enter the marks of physics:  ");
	scanf("%d", &p);
	printf("enter the marks of chemistry:  ");
	scanf("%d", &ch);
	printf("enter the marks of maths:  ");
	scanf("%d", &m);
	total = (e+c+p+ch+m);
	percentage = (total/5);
	printf("total marks = %d", total);
	printf("percentage =%d", percentage);
	return 0;
	
} 

