#include "main.h"

/**
 * _isupper - check if a character is uppercase
 *
 *  @c: character in ascii code
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
