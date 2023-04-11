#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
    char buffer[1];
    buffer[0] = c;
    return (int)fwrite(buffer, sizeof(char), 1, stdout);
}
