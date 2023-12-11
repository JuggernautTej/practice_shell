#include "shell.h"

/**
 * _strlen - a function that returns the length of a string.
 * @strg: the string.
 * Return: the string length.
 */
int _strlen(char *strg)
{
if (*strg == '\0')
return (0);
else
return (1 + _strlen(strg + 1));
}
