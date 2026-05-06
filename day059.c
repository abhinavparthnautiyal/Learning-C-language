/*Problem: Sort characters of a string in ascending order.

Input:
- A string without spaces

Output:
- Print characters after sorting*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int n;

    scanf("%199s", str);
    n = (int)strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s", str);
    return 0;
}
