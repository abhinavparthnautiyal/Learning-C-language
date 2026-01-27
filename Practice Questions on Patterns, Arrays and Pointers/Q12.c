/*Write a C program to display a such a pattern for n rows using a number that starts with 1 and each row will have a 1 as the first and last number.

  1
 121
12321
*/

#include<stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
for(k=1;k<=n-i;k++){
printf(" ");
}
for(j=1;j<=i;j++){
printf("%d",j);
}
for(j=i-1;j>=1;j--){
printf("%d",j);
}
printf("\n");
}
return 0;
}
