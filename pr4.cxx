#include<stdio.h>
int main()

{
    int f,c;
    printf("enter temperature in feranheat: ");
    scanf("%d", &f);
    c=((f-32)*5)/9;
    printf("temperature in centigrade is:%d",c);
    return 0;

}