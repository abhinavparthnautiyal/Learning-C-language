/*Write a program in C to sort the elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1*/
#include<stdio.h>
int main(){
int n,i,j,a[100],temp;
printf("Input the size of array : ");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
if(a[j]<a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Elements of the array in sorted descending order:\n");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
return 0;
}
