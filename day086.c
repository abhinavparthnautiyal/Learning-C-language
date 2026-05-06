/*Problem: Encrypt text using Caesar cipher.

Input:
- A lowercase string without spaces
- Shift value

Output:
- Print encrypted string*/
#include <stdio.h>

int main() {
    char str[200];
    int shift;

    scanf("%199s %d", str, &shift);
    shift %= 26;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (char)('a' + (str[i] - 'a' + shift) % 26);
        }
    }

    printf("%s", str);
    return 0;
}
