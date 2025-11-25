//1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages
#include<stdio.h>

int FACT(int n)
{ 
    if (n==0 ||n==1)
    return n;
    else
    return n*FACT(n-1);
}

void main()
{
   int num;
    printf("Enter the number whose factorial you want to find:\n");
    scanf("%d", &num);
    int factorial = FACT(num);
   printf("The factorial of %d is %d", num, factorial);
}