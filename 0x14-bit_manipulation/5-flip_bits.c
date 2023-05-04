#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
