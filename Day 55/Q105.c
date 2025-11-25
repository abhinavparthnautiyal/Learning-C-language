//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include<stdio.h>

int majority(int a[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++)
            if(a[j]==a[i]) count++;
        if(count>n/2) return a[i];
    }
    return -1;
}

void main()
{
    int n,i;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d",majority(a,n));
}
