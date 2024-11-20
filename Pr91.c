#include<stdio.h>
int power(int*a,int b){
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*(*a);
    }
    return power;
}

int main(){
  int a;
  printf("entr a number:");
  scanf("%d",&a);
  int *p=&a;
  printf("the square of the entered numbere is:%d\n",power(&a,2));
  printf("the cube of the entered numbere is:%d",power(&a,3));
    return 0;
}