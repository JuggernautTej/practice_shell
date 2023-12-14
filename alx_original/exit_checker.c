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
cachet = _atoi(args);
}
return (cachet);
}

/**
 * exit_checker - Checks if "exit" was entered as input.
 * @cmd: the command entered.
 * Return: Always 0.
 */
int exit_checker(char *cmd)
{
int cachet;
if (_strncmp(cmd, "exit", 4) == 0)
{
cachet = exit_handler(cmd);
free(cmd);
exit(cachet);
}
return (EXIT_SUCCESS);
}
