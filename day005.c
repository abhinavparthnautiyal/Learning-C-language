/*Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed*/
#include<stdio.h>

int main(){
    int size1,size2,i=0,j=0;
    
    scanf("%d",&size1);
    int arr1[size1];
    for(int k=0;k<size1;k++){
        scanf("%d",&arr1[k]);
    }
    
    scanf("%d",&size2);
    int arr2[size2];
    for(int k=0;k<size2;k++){
        scanf("%d",&arr2[k]);
    }
    
    while(i<size1 && j<size2){
        if(arr1[i] <= arr2[j]){
            printf("%d ",arr1[i]);
            i++;
        }
        else{
            printf("%d ",arr2[j]);
            j++;
        }
    }
    
    while(i<size1){
        printf("%d ",arr1[i]);
        i++;
    }
    
    while(j<size2){
        printf("%d ",arr2[j]);
        j++;
    }
    
    return 0;
}