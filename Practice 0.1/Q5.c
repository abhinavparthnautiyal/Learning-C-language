//Write a program to find whether an integer array contains a duplicate number
#include<stdio.h>

int main()
{
int n,i,j,found=0;
int arr[100];

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter the elements:\n"):
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}


for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
found=1;
break;
}
}
if(found==1)
break;
}

if(found==1)
printf("Duplicate element found");
else
printf("No duplicate element found");

return 0;
}
