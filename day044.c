/*Problem: Reverse a string.

Input:
- A string without spaces

Output:
- Print the reversed string*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    scanf("%199s", str);
    for (int i = (int)strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
