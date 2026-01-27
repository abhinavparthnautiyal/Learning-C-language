/*Write a C program to make such a pattern as a pyramid with an asterisk.

   * 
  * * 
 * * * 
* * * *  */
#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=4;i++){
for(k=1;k<=4-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("* ");
}
printf("\n");
}
return 0;
}
