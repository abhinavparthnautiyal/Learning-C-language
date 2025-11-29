/*3.	Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num. */
#include<stdio.h>
void FIBO(int n, int num1, int num2) 
{  
    int a=num1,b=num2 ,sum;
    if (n != 0)
    {
    sum = a+b;
    printf("%d, ", sum);
    a=b;
    b=sum;
    FIBO(n-1, a, b);
    }
    return;
}
void main()
{
    int num, a=0,b=1;
    printf("Enter the no. of terms upto which you want to see the fibonacci series:\n");
    scanf("%d", &num);
    printf("The series as follows:\n");
    printf("0, 1, ");
    FIBO(num, a, b);
}