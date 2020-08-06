#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 17; j++)
        {
            if (j >= 3 - i && j <= 6 + i || j >= 12 - i && j <= 15 + i)
            {
                printf("love ");
            }
            else
            {
                printf("     ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j <= 17; j++)
        {
            if (j >= i + 1 && j <= 17 - i)
            {
                printf("love ");
            }
            else
            {
                printf("     ");
            }
        }
        printf("\n");
    }
    getch();
}