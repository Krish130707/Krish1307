#include<stdio.h>
int main()
{ float b ,h, area;
printf("enter the value of base of triangle: ");
scanf("%f", &b);
printf("enter the value of hight of triangle: ");
scanf("%f", &h);
area = (b*h)/2;
printf("\n\n Area of Triangle is: %f",area);
return (0);
}