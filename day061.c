/*Problem: Write integers to a file and read them back.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print integers read from the file*/
#include <stdio.h>

int main() {
    int n, value;
    FILE *fp;

    scanf("%d", &n);
    fp = fopen("day061_numbers.txt", "w");
    if (fp == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        fprintf(fp, "%d ", value);
    }
    fclose(fp);

    fp = fopen("day061_numbers.txt", "r");
    if (fp == NULL) {
        return 1;
    }
    while (fscanf(fp, "%d", &value) == 1) {
        printf("%d ", value);
    }
    fclose(fp);
    return 0;
}
