//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
#include<string.h>

int main()
{
    enum Role{ADMIN,USER,GUEST};
    char r[10];
    scanf("%s",r);
    if(strcmp(r,"ADMIN")==0) printf("Welcome Admin!");
    else if(strcmp(r,"USER")==0) printf("Welcome User!");
    else if(strcmp(r,"GUEST")==0) printf("Welcome Guest!");
    return 0;
}
