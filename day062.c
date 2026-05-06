/*Problem: Count characters in a file.

Input:
- A line of text

Output:
- Write it to a file and print character count*/
#include <stdio.h>

int main() {
    char text[300];
    int count = 0;
    FILE *fp;

    fgets(text, sizeof(text), stdin);
    fp = fopen("day062_text.txt", "w");
    if (fp == NULL) {
        return 1;
    }
    fputs(text, fp);
    fclose(fp);

    fp = fopen("day062_text.txt", "r");
    if (fp == NULL) {
        return 1;
    }
    while (fgetc(fp) != EOF) {
        count++;
    }
    fclose(fp);

    printf("%d", count);
    return 0;
}
