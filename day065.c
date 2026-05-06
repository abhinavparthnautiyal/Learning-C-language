/*Problem: Find employee with highest salary using structure.

Input:
- First line: integer n
- Next n lines: name and salary

Output:
- Print name of employee with highest salary*/
#include <stdio.h>

struct employee {
    char name[50];
    float salary;
};

int main() {
    int n, max_index = 0;
    struct employee employees[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%49s %f", employees[i].name, &employees[i].salary);
        if (employees[i].salary > employees[max_index].salary) {
            max_index = i;
        }
    }

    printf("%s", employees[max_index].name);
    return 0;
}
