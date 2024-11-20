#include<stdio.h>

int main(){
int n;
printf("no. of integers:\n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int*p=&a[0];
int max=*p; 
for(int*q=p;q<(p+n);q++) {
    if(max<*q){
        max=*q;
    }
}
printf("the greatest number in the given list is:%d",max);
    return 0;
}