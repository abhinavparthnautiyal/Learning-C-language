/*
Write a program in C to add numbers using call by reference.
Test Data : 5 6
Expected Output : The sum of 5 and 6 is 11
*/

#include<stdio.h>
void add(int *a,int *b){
printf("The sum of %d and %d is %d",*a,*b,*a+*b);
}
int main(){
int x,y;
scanf("%d%d",&x,&y);
add(&x,&y);
return 0;
}
