#include <stdio.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (isVowel(c)) {
        printf("%c is a vowel.\n", c);
    } else {
        printf("%c is not a vowel.\n", c);
    }

    return 0;
}
