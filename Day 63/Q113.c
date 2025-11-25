//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include<stdio.h>

int main(){
    int n,i,j,k,temp;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[k-1]);
    return 0;
}
