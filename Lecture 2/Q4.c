//Write a program to read a 2D array which stores the marks of 5 subjects in 3 subjects. Write a program to display higher marker in each subject.
#include <stdio.h>

int main()
{

    int marks[5][3];
    int i, j, max;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter marks for Student %d (3 subjects): ", i + 1);
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Highest Marks in Each Subject:\n");
    for (j = 0; j < 3; j++) 
    { 
        max = marks[0][0];  
        
        for (i = 0; i < 5; i++) 
        { 
            if (marks[i][j] > max) 
            {
                max = marks[i][j];
            }
        }
        printf("Subject %d High Score: %d\n", j + 1, max);
    }

    return 0;
}