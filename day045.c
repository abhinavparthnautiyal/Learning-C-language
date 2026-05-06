/*Problem: Check whether a string is a palindrome.

Input:
- A string without spaces

Output:
- Print "Palindrome" or "Not Palindrome"*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int left = 0, right;

    scanf("%199s", str);
    right = (int)strlen(str) - 1;
    while (left < right) {
        if (str[left++] != str[right--]) {
            printf("Not Palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}
