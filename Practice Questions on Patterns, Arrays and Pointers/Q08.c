/*Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.

   *
  ***
 ***** */
#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=3;i++){
for(k=1;k<=3-i;k++){
printf(" ");
}
for(j=1;j<=2*i-1;j++){
printf("*");
}
printf("\n");
}
return 0;
}
