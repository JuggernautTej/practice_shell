#include "shell.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of a string.
 * @strg: The string.
 * Return: a pointer to the duplicated string or NULL.
 */
char *_strdup(char *strg)
{
int x, len;
char *p;
len = _strlen(strg);
if (strg == NULL)
return ((char *)NULL);
else
{
p = malloc(sizeof(char) * (len + 1));
if (p == NULL)
return ((char *)NULL);
else
{
for (x = 0; x < len; x++)
{
p[x] = str[x];
}
p[len] = '\0';
return (p);
}
}
}
