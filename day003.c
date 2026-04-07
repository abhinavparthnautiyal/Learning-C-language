/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30
 
Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
*/
#include<stdio.h>

int main(){
    int n,i,k,c=0,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    
    for(i=0;i<n;i++){
        c++;
        if(a[i]==k){
            printf("Found at index %d\n",i);
            f=1;
            break;
        }
    }
    
    if(f==0){
        printf("Not Found\n");
    }
    
    printf("Comparisons = %d",c);
    
    return 0;
}