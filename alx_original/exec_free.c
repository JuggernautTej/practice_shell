#include "shell.h"

/**
 * free_dog - a function that frees a pointer to a pointer.
 * @doggy: The pointer to a pointer.
 * Retunr: void.
 */
void free_dog(char **doggy)
{
int x;
for (x = 0; doggy[x] != NULL; x++)
{
free(doggy[x]);
}
free(doggy);
}

/**
 * exec_cmd - a function that executes a command.
 * @command: the command.
 * Return: void.
 */
void exec_cmd(char **command)
{
char *full_cmd = NULL;
int status;
char **env = environ;
pid_t child_pid;
full_cmd = cmdpath_loc(command[0]);
if (full_cmd == NULL)
{
free_dog(command);
return;
}
child_pid = fork();
if (child_pid == -1)
{
perror("Error with forking");
free(full_cmd);
free_dog(command);
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
if (execve(full_cmd, command, env) == -1)
{
perror("Error executing command");
exit(EXIT_FAILURE);
}
}
else
{
wait(&status);
free(full_cmd);
free_dog(command);
}
}
