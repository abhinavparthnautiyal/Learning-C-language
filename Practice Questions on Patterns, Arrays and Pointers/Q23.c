/*Write a program in C to insert the values in the array (sorted list).
Test Data :
Input number of elements you want to insert (max 100): 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 3
element - 2 : 4
element - 3 : 7
element - 4 : 8
Input the value to be inserted : 5
The existing array list is :
2 3 4 7 8
After Insert the list is :
2 3 4 5 7 8*/
#include<stdio.h>
int main(){
int n,i,a[100],val,pos;
printf("Input number of elements you want to insert (max 100): ");
scanf("%d",&n);
printf("Input %d elements in the array in ascending order:\n",n);
for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
printf("Input the value to be inserted : ");
scanf("%d",&val);
for(i=0;i<n;i++){
if(val<a[i]){
pos=i;
break;
}
}
for(i=n;i>pos;i--){
a[i]=a[i-1];
}
a[pos]=val;
n++;
printf("The existing array list is :\n");
for(i=0;i<n-1;i++){
printf("%d ",a[i]);
}
printf("\nAfter Insert the list is :\n");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
return 0;
}
