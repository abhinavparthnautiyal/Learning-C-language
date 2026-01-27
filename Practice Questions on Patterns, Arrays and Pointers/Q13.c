/*Write a C program to display the pyramid pattern using the alphabet.

        A
      A B A 
    A B C B A
  A B C D C B A */
  #include<stdio.h>
int main(){
int i,j,k;
char ch;
for(i=1;i<=4;i++){
for(k=1;k<=4-i;k++){
printf("  ");
}
ch='A';
for(j=1;j<=i;j++){
printf("%c ",ch);
ch++;
}
ch-=2;
for(j=1;j<i;j++){
printf("%c ",ch);
ch--;
}
printf("\n");
}
return 0;
}
