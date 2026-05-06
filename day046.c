/*Problem: Count vowels and consonants in a string.

Input:
- A line of text

Output:
- Print vowel count and consonant count*/
#include <stdio.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = (char)tolower((unsigned char)ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char str[300];
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            if (is_vowel(str[i])) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("%d %d", vowels, consonants);
    return 0;
}
