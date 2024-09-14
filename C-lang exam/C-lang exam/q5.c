// nested loop

#include <stdio.h>

int main()
{
    int i, j, num;

    for (i = 0; i < 5; i++)
    {
        num = 10 - i;

        for (int k = 0; k < i; k++)
        {
            printf("  ");
        }

        for (j = i; j < 5; j++)
        {
            printf("%d ", num--);
        }

        printf("\n");
    }

    return 0;
}