/*Problem: Add two complex numbers using structure.

Input:
- real and imaginary parts of two complex numbers

Output:
- Print resulting complex number*/
#include <stdio.h>

struct complex {
    float real;
    float imag;
};

int main() {
    struct complex a, b, sum;

    scanf("%f %f", &a.real, &a.imag);
    scanf("%f %f", &b.real, &b.imag);

    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    printf("%.2f + %.2fi", sum.real, sum.imag);
    return 0;
}
