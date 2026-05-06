/*Problem: Concatenate two strings without strcat.

Input:
- Two strings without spaces

Output:
- Print the concatenated string*/
#include <stdio.h>

int main() {
    char a[200], b[100];
    int i = 0, j = 0;

    scanf("%99s %99s", a, b);
    while (a[i] != '\0') {
        i++;
    }
    while (b[j] != '\0') {
        a[i++] = b[j++];
    }
    a[i] = '\0';

    printf("%s", a);
    return 0;
}
