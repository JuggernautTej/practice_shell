#include "shell.h"

/**
 * _strcat - A function that concatenates strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;
while (dest[x] != '\0')
{
x++;
}
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
