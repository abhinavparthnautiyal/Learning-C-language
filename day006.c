/*Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3*/
#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    if(n==0){
        return 0;
    }
    
    int slow=0;
    
    for(i=1;i<n;i++){
        if(arr[i]!=arr[slow]){
            slow++;
            arr[slow]=arr[i];
        }
    }
    
    for(i=0;i<=slow;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}