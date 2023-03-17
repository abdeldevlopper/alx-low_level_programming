#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)
{
for (j = i + 8; j <= 12; j++)
{
putchar(i + '0');
putchar(j + '0');

if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
