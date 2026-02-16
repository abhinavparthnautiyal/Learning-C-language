#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int n, new_num;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    if (n ==1) 
    return 1;

    p = (int*)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
    scanf("%d", (p+i)); 
    }

    printf("You entered: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p+i));
    }
   printf("\nenter how much more space do you want to reallocate to the previous allocated memory\n");
   scanf("%d", &new_num);

   p = (int*)realloc(p, new_num * sizeof(int));

   printf("Enter the extra elements:\n");
   
   for(int j=0; j<new_num; j++){
   scanf("%d", (p+n+j)); 
   }
   
   printf("The final no. of elements stored in the allocated memory are: \n");
   
   for(int j = 0; j < (n + new_num) ; j++)
   {
    printf("%d ", *(p+j));
   }

   free(p);

    return 0;
}