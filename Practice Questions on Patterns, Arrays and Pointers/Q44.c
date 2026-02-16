#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, *p, inc, dec;

  print("Enter the number of elements you want in your array: \n");
  scanf("%d", &n);

  p = (int*)malloc(n * sizeof(int));

  print("Enter the elements :\n");
  for(int i =0 ; i < n; i++)
  {
      print("%d", (p + i));
  }

  print("Enter by how much do you want to increase you array size:\n");
  scanf("%d", %inc);

  p = realloc(p, inc* sizeof(int));

  printf("The elements are now as follows:\n");
   for(int i =0 ; i < (n+inc); i++)
  {
      print("%d", (i));
  }

  printf("Enter by how much do you want to dcerease the sixe of your array now: \n ");

}
