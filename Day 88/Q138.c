//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include<stdio.h>

int main()
{
    enum Traffic{RED,YELLOW,GREEN};
    char *names[]={"RED","YELLOW","GREEN"};
    for(int i=0;i<3;i++) printf("%s=%d\n",names[i],i);
    return 0;
}
