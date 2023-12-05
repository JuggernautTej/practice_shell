#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _getenv - custom getenv program.
 * name: the name of the enviroment variable.
 * Return: a pointer to the coresponding value string.
 */
char *_getenv(const char *name)
{
  extern char **environ;
  int x;
  char *tkn;
  for (x = 0; environ[x] != NULL; x++)
    {
      tkn = strtok(environ[x], "=");
      if (strcmp(tkn, name) == 0)
	{
	  return (strtok(NULL, "="));
	}
    }
  return (NULL);
}

/**
 * main - entry point
 * Return: Always 0.
 */
int main(void)
{
  char *username = _getenv("PATH");
  if (username != NULL)
    {
      printf("HOME=%s\n", username);
    }
  else
    {
      printf("USER environment variable not found.\n");
    }
  return (0);
}
