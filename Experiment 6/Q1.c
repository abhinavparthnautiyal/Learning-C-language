//1.	Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages
#include<stdio.h>

int FACT(int n)
{
    if(n==0||n==1) return 1;
    return n*FACT(n-1);
}

int FACT_NONREC(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++) f=f*i;
    return f;
}

void main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Recursive factorial of %d is %d\n",num,FACT(num));
    printf("Non recursive factorial of %d is %d\n",num,FACT_NONREC(num));
}
