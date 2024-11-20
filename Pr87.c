#include<stdio.h>
struct student{
    char name[30];
    int marks;
};
void isgreater(struct student std[]){
    for(int i=0;i<2;i++){
    if(std[i].marks>500){
        printf("%s",std[i].name);
    }
    }
}
int main(){
    struct student std[2];
    for(int i=0;i<2;i++){
        scanf(" %[^\n]s", &std[i].name);
        scanf("%d", &std[i].marks);
    }
    isgreater(std);
}