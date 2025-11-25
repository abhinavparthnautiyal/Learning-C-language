//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>
#include<string.h>

int main()
{
    enum Traffic{RED,YELLOW,GREEN};
    char s[10];
    scanf("%s",s);
    if(strcmp(s,"RED")==0) printf("Stop");
    else if(strcmp(s,"YELLOW")==0) printf("Wait");
    else if(strcmp(s,"GREEN")==0) printf("Go");
    return 0;
}
