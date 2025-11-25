//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include<stdio.h>
#include<string.h>

int main()
{
    enum Months{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    char month[10];
    scanf("%s",month);
    if(strcmp(month,"JAN")==0) printf("31 days");
    else if(strcmp(month,"FEB")==0) printf("28 or 29 days");
    else if(strcmp(month,"MAR")==0) printf("31 days");
    else if(strcmp(month,"APR")==0) printf("30 days");
    else if(strcmp(month,"MAY")==0) printf("31 days");
    else if(strcmp(month,"JUN")==0) printf("30 days");
    else if(strcmp(month,"JUL")==0) printf("31 days");
    else if(strcmp(month,"AUG")==0) printf("31 days");
    else if(strcmp(month,"SEP")==0) printf("30 days");
    else if(strcmp(month,"OCT")==0) printf("31 days");
    else if(strcmp(month,"NOV")==0) printf("30 days");
    else if(strcmp(month,"DEC")==0) printf("31 days");
    return 0;
}
