#include "main.h"
#include <stdlib.h>

/**
 * __memset - Fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Character to copy
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *__memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	__memset(ptr, 0, nmemb * size);
	return (ptr);
}
