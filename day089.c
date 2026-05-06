/*Problem: Count words in a line of text.

Input:
- A line of text

Output:
- Print number of words*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];
    int words = 0, in_word = 0;

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    printf("%d", words);
    return 0;
}
