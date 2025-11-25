/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include<stdio.h>

void main()
{
    int n,i,j,found;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        found=-1;
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                found=a[j];
                break;
            }
        }
        printf("%d",found);
        if(i<n-1) printf(", ");
    }
}
