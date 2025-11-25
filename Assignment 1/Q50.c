//Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.
#include<stdio.h>

int FIBO(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return FIBO(n-1)+FIBO(n-2);
}

void main()
{
    int num,i;
    printf("Enter how many terms:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
        printf("%d ",FIBO(i));
}
