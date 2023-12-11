#include "shell.h"

/**
 * check_cmd - a function that checks if a command is found.
 * @cmd: the pointer containing the string.
 * Return: void.
 */
void check_cmd(char *cmd)
{
int a;
a = access(cmd, F_OK);
if (a == -1)
{
perror("Command does not exist");
exit(1);
}
}
