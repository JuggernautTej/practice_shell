#include "shell.h"

/**
 * _strcpy - a function that copies a string from a source to a destination
 * @dest: destination string.
 * @src: source string.
 * Return: the copied string.
 */
char *_strcpy(char *dest, char *src)
{
char *result = dest;
if (dest == NULL || src == NULL)
return (NULL);
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
