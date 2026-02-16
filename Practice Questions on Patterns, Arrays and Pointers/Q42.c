#include <stdio.h>

void main()
{
    
    for (int i = 1; i < 8; i++)
    {
        for(int a )
        if (i < 5)
        {
            for (int j = a; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 1; k < 8; k += 2)
            {
                printf("*");
            }
        }
        else
        {
            for (int p = 1; p < 4; p++)
            {
                printf(" ");
            }
            for (int n = 5; n > 0; n -= 2)
            {
                printf("*");
            }
        }
        printf("\n");
    }

}