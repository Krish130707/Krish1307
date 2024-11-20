#include<stdio.h>
 int main()
 { char str[30]; 
 printf("enter a string :"); 
 scanf("%[^\n]s",str);
  char*p=str; 
  int n=0; 
  while(*(p)!='\0'){ 
    n++;
     p++; 
    } 
     
    char str2[n+1]; 
    char*q=str2;
     p=p-1; 
     for(int i=0;i<n;i++){ 
      *q=*p; 
      p--;
       q++;
       } 
       *q='\0'; 
       printf("%s",str2);
        return 0; 
        }