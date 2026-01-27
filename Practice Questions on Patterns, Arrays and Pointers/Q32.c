/*
Write a program in C to swap elements using call by reference.
*/

#include<stdio.h>
void swap(int *a,int *b,int *c){
int t=*a;
*a=*c;
*c=*b;
*b=t;
}
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
swap(&a,&b,&c);
printf("element 1 = %d\nelement 2 = %d\nelement 3 = %d",a,b,c);
return 0;
}
