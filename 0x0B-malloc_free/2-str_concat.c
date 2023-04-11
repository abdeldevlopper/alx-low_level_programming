#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

int len1 = 0;
while (s1[len1])
len1++;

int len2 = 0;
while (s2[len2])
len2++;

char *str = malloc(sizeof(char) * (len1 + len2 + 1));
if (str == NULL)
return (NULL);

for (int i = 0; i < len1; i++)
str[i] = s1[i];

for (int j = 0; j < len2; j++)
str[len1 + j] = s2[j];

str[len1 + len2] = '\0';

return (str);
}
