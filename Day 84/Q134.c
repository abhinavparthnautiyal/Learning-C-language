//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>

int main()
{
    enum Status{SUCCESS,FAILURE,TIMEOUT};
    char s[10];
    scanf("%s",s);
    if(strcmp(s,"SUCCESS")==0) printf("Operation successful");
    else if(strcmp(s,"FAILURE")==0) printf("Operation failed");
    else if(strcmp(s,"TIMEOUT")==0) printf("Operation timed out");
    return 0;
}
