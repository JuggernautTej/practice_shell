#include "shell.h"

/**
 * _strncmp - a function that compares the first x bits of a string
 * with another.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * @x: The number of  characters to compare.
 * Return: Characters based on the comparison.
 */
int _strncmp(char *s1, char *s2, size_t x)
{
while (x > 0)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
x--;
}
return (0);
}
