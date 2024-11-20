#include<stdio.h>
int main(){
char str[30];
printf("enter string:\n");
scanf(" %[^\n]s",str);
char* p=str;
int i=0,cs=0,c=0;
while(*(p+i)!='\0'){
 if(*(p+i)==' '){
    cs++;
 }
 else{
    c++;
 }
 i++;
}
printf("the length of string including spaces is:%d\n",cs+c);
printf("th e length of string excluding spaces is: %d",c);
return 0;
}