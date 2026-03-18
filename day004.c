/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays*/
#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int l=0,r=n-1,temp;
    
    while(l<r){
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}