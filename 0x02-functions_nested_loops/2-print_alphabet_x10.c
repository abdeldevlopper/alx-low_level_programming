#include "main.h"

/**
 * print_alphabet_x10 - this program shows lowercase alphabets 10x
 * Description - printing all alphabets 10x
 */
void print_alphabet_x10(void)
{
int l = 1;
while (l <= 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
l++;
}
}
