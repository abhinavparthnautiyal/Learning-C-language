//Write a program to input two m*n matrices and then calculate the sum of their correspondionf elements and store it in a third m*n matrix.
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the dimension of the first matrix: ");
    scanf("%d %d", &a , &b);
    printf("Enter the dimension of the second matrix: "); 
    scanf("%d %d", &c , &d);

   int arr1[a][b], arr2[c][d], arr3[a][b];
    
    if(a!=c || b!=d)
    {
        printf("The matrices are not suitable for addition");
        return 1;
    }

    printf("Enter the elements of first matrix:\n");
    for(int i=0; i < a; i++)
    {
        for(int j=0; j < b; j++)
        {
        scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
     for(int i=0; i < c; i++)
    {
        for(int j=0; j < d; j++)
        {
        scanf("%d", &arr2[i][j]);
        }
    }

    for(int k=0; k < a; k++)
    {
      for(int l=0; l < b; l++)
        {
         arr3[k][l]=arr1[k][l]+arr2[k][l];
        }  
    }

    printf("The sum of the given two matrtices is :\n");
      for(int i=0; i < a; i++)
    {
        for(int j=0; j < b; j++)
        {
        printf("%d  ", arr3[i][j]);
        }
        print("\n");
    }
}