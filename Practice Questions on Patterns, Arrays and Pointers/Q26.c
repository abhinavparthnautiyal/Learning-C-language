/*
Write a program in C to find the transpose of a given matrix.
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4
*/
#include<stdio.h>
int main(){
int r,c,i,j,a[100][100],t[100][100];
printf("Input the rows and columns of the matrix : ");
scanf("%d %d",&r,&c);
printf("Input elements in the first matrix :\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("element - [%d],[%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("The matrix is :\n\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d ",a[i][j]);
t[j][i]=a[i][j];
}
printf("\n");
}
printf("\nThe transpose of a matrix is :\n");
for(i=0;i<c;i++){
for(j=0;j<r;j++){
printf("%d ",t[i][j]);
}
printf("\n");
}
return 0;
}
