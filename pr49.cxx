#include <stdio.h>
int main()
{
    int rows=5,i,j,k;
    for(i=1;i<=rows;i++)
    {
        for(j=i;j<rows;j++)
        {
            printf(" ");
         }
         for(k=1;k<=i;k++)       
         {
             printf("*");
         }
             printf("\n");
       }
} 
     