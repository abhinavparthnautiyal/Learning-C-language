/*Write a program in C to make a pyramid pattern with numbers increased by 1.

   1 
  2 3 
 4 5 6 
7 8 9 10 */
#include<stdio.h>
int main(){
int i,j,k,n=1;
for(i=1;i<=4;i++){
for(k=1;k<=4-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("%d ",n);
n++;
}
printf("\n");
}
return 0;
}
