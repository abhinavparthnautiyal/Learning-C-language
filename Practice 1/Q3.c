//Write a program to print the position of the smallest number in an array
#include<stdio.h>

int main()
{
int n,i,position=0;
int arr[100];

printf("Enter number of elements: ");
scanf("%d",&n);


print("Enter %d numbers: \n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=1;i<n;i++){
if(arr[i]<arr[pos]){
pos=i;
}
}

printf("Smallest number is %d\n",arr[pos]);
printf("Position is %d",pos+1);

return 0;
}
