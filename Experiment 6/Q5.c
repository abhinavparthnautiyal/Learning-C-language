//5.	Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string. 
#include <stdio.h>
#include <string.h>

void REVERSE(char str[])
{
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str); // Using gets as it's often used in academic settings, though fgets is safer.
    
    REVERSE(str);
    
    printf("Reversed string: %s\n", str);
}