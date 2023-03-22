#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table starting with 0
 * @n: the size of the times table
 */
void print_times_table(int n)
{
    int i, j;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%d", i * j);

            if (j != n)
                printf(", ");
            else
                printf("\n");
        }
    }
}
