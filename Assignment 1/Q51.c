//Develop a recursive function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.
#include<stdio.h>

int ISPRIME(int n,int i)
{
    if(n<=1) return 0;
    if(i*i>n) return 1;
    if(n%i==0) return 0;
    return ISPRIME(n,i+1);
}

void main()
{
    int start,end,i;
    printf("Enter start and end:\n");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
        if(ISPRIME(i,2)==1)
            printf("%d ",i);
}
