#include "shell.h"

/**
 * _strcmp - A function that compares strings.
 * @s1: Destination string.
 * @s2: Source string.
 * Return: Integer indicating the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
