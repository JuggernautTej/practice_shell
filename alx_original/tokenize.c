#include "shell.h"

/**
 * tokenize - A function that parses a string.
 * @strg: the string.
 * Return: an array of the parsed string.
 */
char **tokenize(char *strg)
{
int x = 0, arg_count = 0;
char *tkn, *strg_cpy;
char **array;
strg_cpy = _strdup(strg);
tkn = strtok(strg_cpy, " \t\n");
if (tkn == NULL)
{
free(strg_cpy);
exit(EXIT_FAILURE);
}
while (tkn)
{
arg_count++;
tkn = strtok(NULL, " \t\n");
}
free(strg_cpy);
array = (char **)malloc((arg_count + 1) * sizeof(char *));
if (array == NULL)
{
perror("Error allocating memory");
exit(EXIT_FAILURE);
}
tkn = strtok(strg, " \t\n");
if (tkn == NULL)
{
exit(EXIT_FAILURE);
}
while (tkn)
{
array[x] = _strdup(tkn);
if (array[x] == NULL)
{
exit(EXIT_FAILURE);
}
x++;
tkn = strtok(NULL, " \t\n");
}
array[x] = NULL;
return (array);
}
