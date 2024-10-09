#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char text[100];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    int length = stringLength(text);
    printf("Length of the string is: %d\n", length);

    return 0;
}
