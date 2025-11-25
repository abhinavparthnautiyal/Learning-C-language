//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include<stdio.h>

int pivot(int n)
{
    int x,sum1,sum2,i;
    for(x=1;x<=n;x++){
        sum1=0;sum2=0;
        for(i=1;i<=x;i++) sum1+=i;
        for(i=x;i<=n;i++) sum2+=i;
        if(sum1==sum2) return x;
    }
    return -1;
}

void main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("%d",pivot(n));
}
