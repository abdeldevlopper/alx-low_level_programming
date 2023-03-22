#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int num, num1, n;

for (num = 0; num <= 9; num++)
{
_putchar('0');

for (num1 = 1; num1 <= 9; num1++)
{
_putchar(',');
_putchar(' ');

n = num * num1;

if (n <= 9)
_putchar(' ');
else
_putchar((n / 10) + '0');

_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
