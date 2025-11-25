//Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers.
#include<stdio.h>

int GCD(int a,int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}

void main()
{
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("GCD of %d and %d is %d",num1,num2,GCD(num1,num2));
}
