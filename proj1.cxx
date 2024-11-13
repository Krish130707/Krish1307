#include <stdio.h>
#include <string.h>
int main()
//Bigger is greater
{
    char str [100] = "";
    scanf("%s",str);
    for (unsigned int i = 1; i < strlen(str); ++i){
        for (unsigned int j = 0; j < i; j++){
            if (str[j+1] > str[j]){
                char temp = 'a';
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("%s",str);
}