//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include<stdio.h>

int pivot(int a[],int n)
{
    int i,left=0,right=0;
    for(i=0;i<n;i++) right+=a[i];
    for(i=0;i<n;i++){
        right-=a[i];
        if(left==right) return i;
        left+=a[i];
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
    printf("%d",pivot(a,n));
}
