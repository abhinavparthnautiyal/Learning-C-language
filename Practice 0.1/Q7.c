//Write a program to insert an element at a given location in an array that is sorted in an ascending order.
#include<stdio.h>
int main()
{
    int arr[100], size, position, num, j;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &size);

    if(size>100)
    {
        printf("The array cannot support this many elements");
        return 1;
    }

    printf("Enter the elements: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < size - 1; i++) 
    {
    for (int j = 0; j < size - i - 1; j++) 
    {
        if (arr[j] > arr[j + 1]) 
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    }
    printf("The array is as follows: \n");
      for(int i=0; i < size ; i++)
    {
        printf("Element %d : %d\n", i, arr[i]);
    }
    
    printf("Enter the position of the element at which you want to insert an element: ");
    scanf("%d", &position);
    printf("Enter the element you want to insert: ");
    scanf("%d", &num);
    
    j=size;
    while(j >= position)
    {
       arr[j+1]=arr[j];
       j--;
    }
    arr[position] = num;

    printf("The new array is as follows: \n");
    for(int i=0; i<(size + 1); i++)
    {
        printf("Element %d : %d\n", i, arr[i]);
    }
    return 0;
}