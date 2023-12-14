#include "shell.h"

/**
 * _getenv - custom getenv program.
 * @name: the name of the environment variable.
 * Return: a pointer to the corresponding value string.
 */
char *_getenv(char *name)
{
char **my_environ = environ;
int x;
char *tkn, *env_copy, *value;
for (x = 0; my_environ[x] != NULL; x++)
{
env_copy = _strdup(my_environ[x]);
tkn = strtok(env_copy, "=");
if (_strcmp(tkn, name) == 0)
{
value = _strdup(strtok(NULL, "="));
free(env_copy);
return (value);
}
free(env_copy);
}
return (NULL);
}
