#include<stdio.h>
int main(){
    int t,m,z;
    printf("enter the number of test cases \n");
    scanf("%d",&t);
    for (int i=1;i<=t;i++){
            printf("Enter number \n");
    scanf("%d",&m);
    int x=m;
    int count=0;
    while(x>0){
     z=x%10;
    if(z!=0 && m%z==0)
        {
                count++;
        }
     x=x/10;
    }
    printf("%d\n",count); 
        }
}