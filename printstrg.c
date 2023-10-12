#include "shell.h"

/**
 * _printstrg - a function that prints a string.
 * @strg: the string to be printed.
 * return: the number of characters to be printed.
 */
int _printstrg(char *strg)
{
int a;
if (strg == NULL)
exit(1);
a = write(STDOUT_FILENO, strg, _strlen(strg));
if (a == -1)
{
perror("Could not write input");
return(-1);
}
else
return (a);
}
