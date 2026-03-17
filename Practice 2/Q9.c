// Convert uppercase string to lowercase using for loop.

#include <stdio.h>

int main() {
    char str[] = "HELLO WORLD";
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    
    printf("%s\n", str);
    return 0;
}