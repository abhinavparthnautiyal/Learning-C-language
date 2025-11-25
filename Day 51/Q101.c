//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include<stdio.h>

int first(int a[],int n,int t)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==t) return i;
    return -1;
}

int last(int a[],int n,int t)
{
    int i;
    for(i=n-1;i>=0;i--)
        if(a[i]==t) return i;
    return -1;
}

void main()
{
    int n,i,t;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter target:\n");
    scanf("%d",&t);
    printf("%d,%d",first(a,n,t),last(a,n,t));
}
