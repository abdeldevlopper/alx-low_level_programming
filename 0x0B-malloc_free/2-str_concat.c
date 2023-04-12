#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a given string.
 * @s: the string.
 * Return: the length of given string.
 */
int _strlen(char *s)
{
    int i = 0;

    while (s[i])
    {
        i++;
    }
    return (i);
}

/**
 * _create_array - creates an array of chars.
 * @size: the size of the memory to allocate.
 * Return: the array created.
 */
char *_create_array(unsigned int size)
{
    char *array;

    if (size == 0)
        return (NULL);
    array = malloc(sizeof(char) * size);
    if (!array)
        return (NULL);
    return (array);
}

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
    char *str;
    int size_s1 = (s1 != NULL) ? _strlen(s1) : 0;
    int size_s2 = (s2 != NULL) ? _strlen(s2) : 0;
    int i, j;

    str = _create_array(size_s1 + size_s2 + 1);
    if (!str)
        return (NULL);
    for (i = 0; i < size_s1; i++)
        str[i] = s1[i];
    for (j = 0; j < size_s2; j++)
        str[i + j] = s2[j];
    str[i + j] = '\0';
    return (str);
}
