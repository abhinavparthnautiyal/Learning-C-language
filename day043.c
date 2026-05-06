/*Problem: Find length of a string without strlen.

Input:
- A string without spaces

Output:
- Print its length*/
#include <stdio.h>

int main() {
    char str[200];
    int length = 0;

    scanf("%199s", str);
    while (str[length] != '\0') {
        length++;
    }

    printf("%d", length);
    return 0;
}
