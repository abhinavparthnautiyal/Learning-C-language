//Write a program to delete an element at a given location in an array that is alreadty in an ascending order.
#include <stdio.h>

int main() 
{
    int arr[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
    for (int j = 0; j < n - i - 1; j++) 
    {
        if (arr[j] > arr[j + 1]) 
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }

    printf("The array is as follows");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }


    printf("Enter the location (index) where you want to delete: ");
    scanf("%d", &pos);

    if (pos >= n || pos < 0) 
    {
        printf("Deletion not possible. Invalid location.\n");
        return 1;
    } 
    
    
    i=pos; 
    while(i<=n)
    {
        arr[i]=arr[i+1];
        i++;
    }
    n--;
    
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) 
        {
            printf("%d  ", arr[i]);
        }
    

    return 0;
}
}