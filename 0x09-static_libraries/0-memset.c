#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @s: memory area pointer
 * @b: constant byte to be filled
 * @n: bytes of the memory area pointed to by @s
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;

    while (i < n)
    {
        s[i] = b;
        i++;
    }

    return (s);
}
