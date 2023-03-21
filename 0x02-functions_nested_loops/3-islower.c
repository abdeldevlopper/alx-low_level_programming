#include "main.h"

/**
 * _islower - this program return either 1 or 0
 *
 *  @c: character in ascii code
 *
 * Return:0 or 1
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
_putchar('\n');
}
