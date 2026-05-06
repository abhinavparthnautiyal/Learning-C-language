/*Problem: Add numbers supplied as command line arguments.

Input:
- Command line integer arguments

Output:
- Print their sum*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    printf("%d", sum);
    return 0;
}
