#include "shell.h"

/**
 * freedom - a free function to be used in getenv program.
 * @hi_env: the environment variable to free.
 * Return: void.
 */
void freedom(char **hi_env)
{
int x, count = 0;
while (hi_env[count] != NULL)
{
count++;
}
for (x = 0; x < count; x++)
{
free(hi_env[x]);
}
free(hi_env);
}

/**
 * _getenv - custom getenv program.
 * name: the name of the enviroment variable.
 * Return: a pointer to the coresponding value string.
 */
char *_getenv(char *name)
{
char **my_environ = NULL;
int x, count = 0;
char *tkn, *env_value;
 printf("testing getenv\n");
while (environ[count] != NULL)
{
count++;
}
my_environ = malloc((count + 1) * sizeof(char *));
if (my_environ == NULL)
{
perror("Memory allocation error");
exit(EXIT_FAILURE);
}
printf("getenv check2\n");
for (x = 0; x < count; x++)
{
my_environ[x] = _strdup(environ[x]);
if (my_environ[x] == NULL)
{
perror("Memory allocation error");
exit(EXIT_FAILURE);
}
}
my_environ[count] = NULL;
for (x = 0; my_environ[x] != NULL; x++)
{
tkn = strtok(my_environ[x], "=");
printf("getenv check 3\n");
if (_strcmp(tkn, name) == 0)
{
env_value = strtok(NULL, "=");
 printf("getenv check 4 %s\n", env_value);
freedom(my_environ);
return (env_value);
}
}
freedom(my_environ);
return (NULL);
}
