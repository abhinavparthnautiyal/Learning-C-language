/*Write a program in C to display a pattern like a diamond.

    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 
    
    */
#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=5;i++){
for(k=1;k<=5-i;k++){
printf(" ");
}
for(j=1;j<=2*i-1;j++){
printf("*");
}
printf("\n");
}
for(i=4;i>=1;i--){
for(k=1;k<=5-i;k++){
printf(" ");
}
for(j=1;j<=2*i-1;j++){
printf("*");
}
printf("\n");
}
return 0;
}
