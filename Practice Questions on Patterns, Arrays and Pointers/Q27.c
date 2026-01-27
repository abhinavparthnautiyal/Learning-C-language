/*
Write a program in C to show the basic declaration of a pointer.

Expected Output :
Here is m=10
z stores the address of m
*z stores the value of m
*/

#include<stdio.h>
int main(){
int m=10;
int *z=&m;
printf("Here is m=%d\n",m);
printf("z stores the address of m = %p\n",z);
printf("*z stores the value of m = %d\n",*z);
return 0;
}
