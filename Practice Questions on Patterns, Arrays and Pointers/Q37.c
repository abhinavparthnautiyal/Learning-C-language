/*
Write a program in C to find the largest element using Dynamic Memory Allocation.
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i;
float *p,max;
scanf("%d",&n);
p=(float*)malloc(n*sizeof(float));
for(i=0;i<n;i++)
scanf("%f",&p[i]);
max=p[0];
for(i=1;i<n;i++)
if(p[i]>max)
max=p[i];
printf("The Largest element is : %.2f",max);
free(p);
return 0;
}
