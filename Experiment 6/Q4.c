//4.	Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges
#include <stdio.h>

int ISPRIME(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num/2 ; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int start, end;

    printf("Enter the start of the range:\n");
    scanf("%d", &start);

    printf("Enter the end of the range:\n");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        if (ISPRIME(i))
            printf("%d ", i);
    }
}
