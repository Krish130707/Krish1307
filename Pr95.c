#include<stdio.h>
struct employ{
  char empname[30];
  int empid;
  int salary;
};
int main(){
  struct employ emp[50];
  int n;
  printf("enter no .of employees:");
  scanf("%d",&n);
  struct employ *ptr=emp;
  for(int i=0;i<n;i++){
   printf("enter details of employee %d in the order of name,id and salary:",i+1);
   scanf(" %s %d %d",&(ptr + i)->empname, &(ptr + i)->empid, &(ptr + i)->salary);
  }
   for(int i=0;i<n;i++){
    printf("name:%s\n",(ptr+i)->empname);
    printf("ID:%d\n",(ptr+i)->empid);
    printf("salary:%d\n",(ptr+i)->salary);
   }
  
    return 0;
}