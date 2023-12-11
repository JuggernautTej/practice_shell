#include "shell.h"

/**
 * exit_handler - Handles when exit is passed.
 * @cmd: The user input containing the exit command.
 * Return: The cachet provided by the command.
 */
int exit_handler(char *cmd)
{
  int cachet = 0;
  char *args = strtok(cmd, " \n");
  args = strtok(NULL, " \n");
  if (args != NULL)
    {
      cachet = atoi(args);
    }
  return (cachet);
}
