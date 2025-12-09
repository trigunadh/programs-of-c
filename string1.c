#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Taking a single character input
    scanf("%c", &ch);
    printf("%c\n", ch);

    // Taking a string input (no spaces)
    scanf("%s", s);
    printf("%s\n", s);

    // To handle newline from previous input
    scanf("\n");

    // Taking a sentence input (with spaces)
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);

    return 0;
}