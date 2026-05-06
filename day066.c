/*Problem: Demonstrate union storage by reading integer and float.

Input:
- Integer value
- Float value

Output:
- Print values stored one at a time in a union*/
#include <stdio.h>

union data {
    int number;
    float decimal;
};

int main() {
    union data value;
    int number;
    float decimal;

    scanf("%d %f", &number, &decimal);
    value.number = number;
    printf("%d\n", value.number);
    value.decimal = decimal;
    printf("%.2f", value.decimal);
    return 0;
}
