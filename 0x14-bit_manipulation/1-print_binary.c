#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to convert and print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int size = sizeof(unsigned long int) * 8;
	int flag = 0;

	mask <<= size - 1;

	while (mask)
	{
		if (n & mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag || size == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
		size--;
	}
}
