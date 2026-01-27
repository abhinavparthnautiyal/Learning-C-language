/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student *s;
    s = (struct Student*)malloc(sizeof(struct Student));
    if(s == NULL) return 1;
    scanf("%s %d %f", s->name, &s->roll, &s->marks);
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);
    free(s);
    return 0;
}