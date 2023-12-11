#include "shell.h"

/**
 * _getenv - custom getenv program.
 * name: the name of the enviroment variable.
 * Return: a pointer to the coresponding value string.
 */
char *_getenv(char *name)
{
char **my_environ = environ;
char *little_env;
int x;
char *tkn;
for (x = 0; my_environ[x] != NULL; x++)
{
little_env = my_environ[x];
tkn = strtok(little_env, "=");
if (_strcmp(tkn, name) == 0)
{
return (strtok(NULL, "="));
}
}
return (NULL);
}
