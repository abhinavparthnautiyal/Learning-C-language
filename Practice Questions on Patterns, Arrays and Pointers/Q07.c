/*Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4*/
#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=4;i++){
for(k=1;k<=4-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("%d ",i);
}
printf("\n");
}
return 0;
}
