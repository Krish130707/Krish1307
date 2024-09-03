#include <stdio.h>
int main()
{
	int sec,h,m,s;
	printf("enter hours: ");
	scanf("%d", &h);
	printf("enter minutes: ");
	scanf("%d", &m);
	printf("enter seconds: ");
	scanf("%d", &s);
	sec = s+(m*60 )+(h*3600);
	printf("total seconds = %d", sec);
	return 0;
	
}