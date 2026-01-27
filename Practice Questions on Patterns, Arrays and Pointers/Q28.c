/*
Write a program in C to demonstrate how to handle pointers in a program.
*/

#include<stdio.h>
int main(){
int m=29;
int *ab=&m;
printf("Address of m : %p\n",&m);
printf("Value of m : %d\n",m);
printf("Address of pointer ab : %p\n",ab);
printf("Content of pointer ab : %d\n",*ab);
*ab=34;
printf("Content of pointer ab : %d\n",*ab);
*ab=7;
printf("Value of m : %d\n",m);
return 0;
}
