/*Problem: Remove spaces from a string.

Input:
- A line of text

Output:
- Print text without spaces*/
#include <stdio.h>

int main() {
    char str[300], result[300];
    int j = 0;

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("%s", result);
    return 0;
}
