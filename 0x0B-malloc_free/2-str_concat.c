#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 *
 /*
   
 char *str_concat(char *s1, char *s2)
{
size_t s1_len = s1 ? strlen(s1) : 0;
size_t s2_len = s2 ? strlen(s2) : 0;
char *result = malloc(s1_len + s2_len + 1);

if (!result)

if (s1)
memcpy(result, s1, s1_len);
if (s2)

result[s1_len + s2_len] = '\0';
}
