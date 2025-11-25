//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include<stdio.h>

void main()
{
    int n,i,j,k,sum,max;
    printf("Enter size:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter k:\n");
    scanf("%d",&k);
    if(k>n){ printf("-1"); return; }
    max=-1000000;
    for(i=0;i<=n-k;i++){
        sum=0;
        for(j=i;j<i+k;j++)
            sum+=a[j];
        if(sum>max) max=sum;
    }
    printf("%d",max);
}
