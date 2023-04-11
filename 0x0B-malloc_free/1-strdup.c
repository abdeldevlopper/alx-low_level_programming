#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        ;
    return (i);
}

/**
 * _strdup - duplicates a given string.
 * @str: the string to duplicate.
 * Return: the array created.
 */
char *_strdup(char *str)
{
    char *new_str;
    int i;

    if (str == NULL)
        return (NULL);
    new_str = malloc(sizeof(char) * (_strlen(str) + 1));
    if (!new_str)
        return (NULL);
    for (i = 0; str[i]; i++)
        new_str[i] = str[i];
    new_str[i] = '\0';
    return (new_str);
}
