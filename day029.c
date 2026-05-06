/*Problem: Check balanced parentheses using a stack.

Input:
- A string containing brackets

Output:
- Print "Balanced" or "Not Balanced"*/
#include <stdio.h>
#include <string.h>

int matches(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int main() {
    char str[200], stack[200];
    int top = -1;

    scanf("%199s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[++top] = str[i];
        } else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if (top < 0 || !matches(stack[top--], str[i])) {
                printf("Not Balanced");
                return 0;
            }
        }
    }

    printf(top == -1 ? "Balanced" : "Not Balanced");
    return 0;
}
