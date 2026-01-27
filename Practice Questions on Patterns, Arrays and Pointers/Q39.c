/*
Write a program in C to demonstrate the use of pointers to structures.
*/

#include<stdio.h>
struct emp{
char name[20];
char address[20];
};
int main(){
struct emp e={"John Alter","Court Street"};
struct emp *p=&e;
printf("%s from %s",p->name,p->address);
return 0;
}
