/*
Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/
#include<stdio.h>
int main(){
int n,i,a[100],even[100],odd[100],e=0,o=0;
printf("Input the number of elements to be stored in the array :");
scanf("%d",&n);
printf("Input %d elements in the array :\n",n);
for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
if(a[i]%2==0){
even[e]=a[i];
e++;
}else{
odd[o]=a[i];
o++;
}
}
printf("The Even elements are :\n");
for(i=0;i<e;i++){
printf("%d ",even[i]);
}
printf("\nThe Odd elements are :\n");
for(i=0;i<o;i++){
printf("%d ",odd[i]);
}
return 0;
}
