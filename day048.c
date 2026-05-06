/*Problem: Search a substring inside a string.

Input:
- First line: main string without spaces
- Second line: pattern without spaces

Output:
- Print the first index of pattern, or -1*/
#include <stdio.h>
#include <string.h>

int main() {
    char text[200], pattern[100];
    int n, m;

    scanf("%199s %99s", text, pattern);
    n = (int)strlen(text);
    m = (int)strlen(pattern);

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
