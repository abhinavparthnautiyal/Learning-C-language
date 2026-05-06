/*Problem: Convert uppercase letters to lowercase and lowercase to uppercase.

Input:
- A line of text

Output:
- Print text with changed case*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[300];

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower((unsigned char)str[i])) {
            str[i] = (char)toupper((unsigned char)str[i]);
        } else if (isupper((unsigned char)str[i])) {
            str[i] = (char)tolower((unsigned char)str[i]);
        }
    }

    printf("%s", str);
    return 0;
}
