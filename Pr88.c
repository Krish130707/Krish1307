#include<stdio.h>

int main(){
int a[5]={1,2,3,4,5},b[5];
int * p=&a[0];
for(int i=0;i<5;i++){
    b[i]=*(p+i);
}
 printf("the copied array is :");
 for(int i=0;i<5;i++){
    printf("%d",b[i]);
 }
    return 0;
}