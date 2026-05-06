/*Problem: Make a simple calculator using switch.

Input:
- Two numbers and an operator

Output:
- Print result*/
#include <stdio.h>

int main() {
    double a, b;
    char op;

    scanf("%lf %lf %c", &a, &b, &op);
    switch (op) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/':
            if (b == 0) {
                printf("Division by zero");
            } else {
                printf("%.2f", a / b);
            }
            break;
        default: printf("Invalid Operator");
    }
    return 0;
}
