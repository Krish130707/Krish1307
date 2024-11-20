#include<stdio.h>

int main(){
char str[100];
printf("enter a string:");
scanf("%[^\n]s",str);
char*p=str,*q;
q=p;
int c=1; 
while(*p!='\0'){
  if(*p==' '){
    if( *(p+1)!=' '&&*(p+1)!='\0'){
    c++;
    } 
    
  }
  p++;
}
 
if(*q!=' ') 
printf("the no. of words are1 %d",c);
else{
printf("the no. of words are %d",c-1);
}
    return 0;
}