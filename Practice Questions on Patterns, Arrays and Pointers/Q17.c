/*Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/
#include<stdio.h>
int main(){
int n,i,a[100],max,min;
printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++){
if(a[i]>max)max=a[i];
if(a[i]<min)min=a[i];
}
printf("Maximum element is : %d\n",max);
printf("Minimum element is : %d",min);
return 0;
}
