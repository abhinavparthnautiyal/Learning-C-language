//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    int marks;
};

void printStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d",s.name,s.roll_no,s.marks);
}

int main()
{
    struct Student s;
    scanf("%s %d %d",s.name,&s.roll_no,&s.marks);
    printStudent(s);
    return 0;
}
