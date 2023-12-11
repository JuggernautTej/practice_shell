#include "shell.h"

/**
 * exit_checker - checks if "exit" was entered as input.
 * @cmd: the command entered.
 * Return: Always 0.
 */
int exit_checker(char *cmd)
{
  int cachet;
  if (strncmp(cmd, "exit", 4) == 0)
    {
      cachet = exit_handler(cmd);
      free(cmd);
      exit(cachet);
    }
  return (0);
}
