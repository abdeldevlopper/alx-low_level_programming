#include "main.h"

/**
 * print_last_digit - print the last digit of number
 *
 *  @i: character in ascii code
 *
 * Return:last digit
 */

int print_last_digit(int i)
{
int last_digit;
last_digit = i % 10;
if (last_digit < 0)
{
_putchar(-last_digit + 48);
return (-last_digit);
}
else
{
_putchar(last_digit + 48);
return (last_digit);
}
}
