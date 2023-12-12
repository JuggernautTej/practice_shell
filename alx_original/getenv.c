#include "shell.h"

/**
 * _getenv - custom getenv program.
 * name: the name of the enviroment variable.
 * Return: a pointer to the coresponding value string.
 */
char *_getenv(char *name)
{
    char **my_environ = environ;
    int x;
    char *tkn;
    char *env_copy;

    for (x = 0; my_environ[x] != NULL; x++)
    {
        env_copy = _strdup(my_environ[x]);  // Make a copy of the environment variable
        tkn = strtok(env_copy, "=");
        if (_strcmp(tkn, name) == 0)
        {
            char *value = _strdup(strtok(NULL, "="));  // Copy the value
            free(env_copy);  // Free the copy of the environment variable
            return value;
        }
        free(env_copy);  // Free the copy of the environment variable
    }
    return (NULL);
}
