//5.	Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string. 
#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverse(str);
    printf("Reverse of the string: %s", str);
}