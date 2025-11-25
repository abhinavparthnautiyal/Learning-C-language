/*2.	Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers*/
#include<stdio.h>
int GCD(int a, int b)
{
    if(b == 0)
        return a;
        else
        {
    return GCD(b, a % b);  
        }
}

void main()
{
    int num1, num2;
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    int result = GCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, result);
}