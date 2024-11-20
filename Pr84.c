#include<stdio.h>
struct read{
    char author[30];
    char title[30];
    int year;
};
void display(struct read book){
    printf("%s\n",book.author);
    printf("%s\n",book.title);
    printf("%d",book.year);
}
int main(){
    struct read book;
    printf("enter author ");
    scanf(" %[^\n]s", &book.author);
    printf("enter title ");
    scanf(" %[^\n]s", &book.title);
    printf("enter year ");
    scanf(" %d", &book.year);
    display(book);

}