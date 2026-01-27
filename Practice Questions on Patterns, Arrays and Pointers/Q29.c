/*
Write a program in C to demonstrate the use of & and * operators.
*/

#include<stdio.h>
int main(){
int m=300;
float fx=300.6;
char cht='z';
int *pm=&m;
float *pf=&fx;
char *pc=&cht;
printf("value at address of m = %d\n",*pm);
printf("value at address of fx = %.1f\n",*pf);
printf("value at address of cht = %c\n",*pc);
return 0;
}
