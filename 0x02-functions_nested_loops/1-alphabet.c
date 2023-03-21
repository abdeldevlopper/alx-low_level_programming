#include "main.h"
/**
 * print_alphabet - this program shows lowercase alphabets
 * Description - print all alphabets in lower case
 * Return:0
 */

void print_alphabet(void)
{

char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
