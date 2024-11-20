#include<stdio.h>

int main(){
 int a[5]={1,2,3,4,5},b[5];
 int* p=a,*k=b;
 for(int i=0;i<5;i++){
    *(k+i)=*(p+4-i);
 }
 printf("the reversed array is:\n");
 for(int i=0;i<5;i++){
    printf("%d\n",b[i]);
 }
    return 0;
}