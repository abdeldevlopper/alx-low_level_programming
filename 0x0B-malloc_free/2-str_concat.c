#include <stdlib.h>
#include <stdio.h>

/**

_strlen - Returns the length of a given string.

@str: The string to measure the length of.

Return: The length of the string.
*/
size_t _strlen(const char *str)
{
size_t length = 0;

while (str[length] != '\0')
{
length++;
}
return length;
}

/**

create_array - Creates an array of characters with the given size.

@size: The size of the array to create.

Return: A pointer to the newly created array or NULL if size is zero or if

memory allocation fails.
*/
char *create_array(size_t size)
{
char *array = NULL;

if (size == 0)
{
fprintf(stderr, "Error: Size must be greater than 0.\n");
return NULL;
}

array = malloc(sizeof(char) * size);
if (!array)
{
fprintf(stderr, "Error: Failed to allocate memory.\n");
return NULL;
}

return array;
}

/**

str_concat - Concatenates two strings.

@str1: The first string to concatenate.

@str2: The second string to concatenate.

Return: A pointer to the concatenated string or NULL if memory allocation fails.
*/
char *str_concat(const char *str1, const char *str2)
{
char *result = NULL;
size_t size1 = (str1 != NULL) ? _strlen(str1) : 0;
size_t size2 = (str2 != NULL) ? _strlen(str2) : 0;
size_t i, j;

result = create_array(size1 + size2 + 1);
if (!result)
{
fprintf(stderr, "Error: Failed to allocate memory.\n");
return NULL;
}

for (i = 0; i < size1; i++)
{
result[i] = str1[i];
}

for (j = 0; j < size2; j++)
{
result[i] = str2[j];
i++;
}

result[i] = '\0';
return result;
}
