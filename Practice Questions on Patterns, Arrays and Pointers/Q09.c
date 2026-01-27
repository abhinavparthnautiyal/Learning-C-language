/*Write a program in C to print Floyd's Triangle.

1 
01
101 
0101 
10101  */
#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
for(j=1;j<=i;j++){
printf("%d",(i+j)%2);
}
printf("\n");
}
return 0;
}
