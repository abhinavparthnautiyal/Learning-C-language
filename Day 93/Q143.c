//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    int n;
    scanf("%d",&n);
    struct Student s[n],top;
    for(int i=0;i<n;i++) scanf("%s %d %d",s[i].name,&s[i].roll_no,&s[i].marks);
    top=s[0];
    for(int i=1;i<n;i++) if(s[i].marks>top.marks) top=s[i];
    printf("Topper: %s (Marks: %d)",top.name,top.marks);
    return 0;
}
