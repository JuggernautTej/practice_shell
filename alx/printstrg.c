#include "shell.h"

/**
 * _printstrg - a function that prints a strg.
 * @strg: the string to be printed.
 * Return: the number of characters printed.
 */
int _printstrg(char *strg)
{
int a;
if (strg == NULL)
exit(1);
a = write(STDOUT_FILENO, strg, _strlen(strg));
if (a == -1)
{
perror("Could not print");
return (-1);
}
else
return (a);
}
