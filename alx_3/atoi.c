#include "shell.h"

/**
 * _atoi - the function that converts a string to an integer.
 * @strg: The string.
 * Return: The value of the converted string as an integer.
 */
int _atoi(char *strg)
{
int x = 0, result = 0, sign = 1;
if (strg == NULL)
{
return (0);
}
while (strg[x] == ' ')
{
x++;
}
if (strg[x] == '-' || strg[x] == '+')
{
if (strg[x] == '-')
{
sign = -1;
}
x++;
}
while (strg[x] >= '0' && strg[x] <= '9')
{
result = result * 10 + (strg[x] - '0');
x++;
}
return (sign * (result));
}
