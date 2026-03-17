//Write a program to find the second largest number in an array
#include<stdio.h>

int main()
{
int n,i;
int arr[100];
int largest,second;

printf("Enter number of elements: ");
scanf("%d",&n);

if(n<2)
{
printf("Need at least 2 numbers");
return 0;
}

printf("Enter the elements:\n"):
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

largest=arr[0];
second=arr[0];

for(i=1;i<n;i++)
{
if(arr[i]>largest)
{
second=largest;
largest=arr[i];
}
else if(arr[i]>second && arr[i]!=largest)
{
second=arr[i];
}
}

if(largest==second)
printf("No second largest element");
else
printf("Second largest number is %d",second);

return 0;
}
