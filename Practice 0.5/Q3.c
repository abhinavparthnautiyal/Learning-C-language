//in a small company there are 5 salesman, each salesman is supposed to sell 3 products. Write a program using 2D array to print (a)total sales of each item; and (b) total sales of each person.

#include <stdio.h>

int main() 
{

    int sales[5][3];
    int i, j, total;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter sales for Salesman %d (3 products): ", i + 1);
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &sales[i][j]);
        }
    }

    printf("\n--- Total Sales per Product ---\n");
    for (j = 0; j < 3; j++) 
    {
        total = 0;
        for (i = 0; i < 5; i++) 
        {
            total += sales[i][j];
        }
        printf("Product %d has total sales: %d\n", j + 1, total);
    }

    printf("\n--- Total Sales per Salesman ---\n");
    for (i = 0; i < 5; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += sales[i][j];
        }
        printf("Salesman %d has total sales: %d\n", i + 1, total);
    }

    return 0;
}