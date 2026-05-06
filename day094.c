/*Problem: Calculate compound interest without using math library.

Input:
- Principal, rate, and time in years

Output:
- Print final amount and compound interest*/
#include <stdio.h>

int main() {
    double principal, rate, amount;
    int years;

    scanf("%lf %lf %d", &principal, &rate, &years);
    amount = principal;
    for (int i = 0; i < years; i++) {
        amount = amount + amount * rate / 100.0;
    }

    printf("%.2f %.2f", amount, amount - principal);
    return 0;
}
