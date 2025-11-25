//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include<stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    int marks;
};

int main()
{
    struct Student s;
    scanf("%s %d %d",s.name,&s.roll_no,&s.marks);
    printf("Name: %s | Roll: %d | Marks: %d",s.name,s.roll_no,s.marks);
    return 0;
}
