//write a program the mean of n numbers using arrays
#include<stdio.h>

int main()
{
int n,i;
float sum=0.0,mean;

printf("Enter how many numbers: ");
scanf("%d",&n);

float arr[n];

print("Enter %d numbers: \n");
for(i=0;i<n;i++){
scanf("%f",&arr[i]);
sum=sum+arr[i];
}

mean=sum/n;

printf("Mean = %.2f",mean);

return 0;
}
