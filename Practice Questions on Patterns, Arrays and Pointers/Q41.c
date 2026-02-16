#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the size of your hollow bubble: ");
    scanf("%d", &n);
       if(n != 1 || n <= 0) 
     {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }

  
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
        }
        else

        {
            for (int l = 0; l < n; l++)
            {
                if (l == 0 || l == (n - 1))
                {
                    printf("*");
                    continue;
                }
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}