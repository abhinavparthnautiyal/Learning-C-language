/*Problem: Store student marks using structure and print average.

Input:
- Name and three marks

Output:
- Print name and average marks*/
#include <stdio.h>

struct student {
    char name[50];
    int marks[3];
};

int main() {
    struct student s;
    int total = 0;

    scanf("%49s", s.name);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }

    printf("%s %.2f", s.name, total / 3.0);
    return 0;
}
