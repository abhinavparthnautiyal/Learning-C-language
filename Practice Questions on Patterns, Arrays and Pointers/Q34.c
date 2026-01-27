/*
Write a program in C to compute the sum of all elements in an array using pointers.
*/

#include<stdio.h>
int main(){
int n,i,a[10],sum=0;
int *p=a;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&p[i]);
sum+=p[i];
}
printf("The sum of array is : %d",sum);
return 0;
}
