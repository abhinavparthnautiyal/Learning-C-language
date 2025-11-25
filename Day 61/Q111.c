//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include<stdio.h>

int firstNeg(int a[],int s,int k){
    int i;
    for(i=s;i<s+k;i++){
        if(a[i]<0) return a[i];
    }
    return 0;
}

int main(){
    int n,k,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<=n-k;i++) printf("%d ",firstNeg(arr,i,k));
    return 0;
}
