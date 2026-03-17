//write a program to display n numbers using array
#include<stdio.h>

int main()
{

int n,i;
printf("Enter how many numbers are there in the array: ");
scanf("%d",&n);

int arr[n];
printf("Enter %d numbers:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("The numbers are:\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}
