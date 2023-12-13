#include "shell.h"

/**
 * cmdpath_loc - a program that finds a path of a command.
 * @cmd: the command.
 *  Return: a string of the full path of the command.
 */
char *cmdpath_loc(char *cmd)
{
char *path_env, *path_envcpy, *tkn, *file_path;
int cmd_len, directory_len;
struct stat buff;
path_env = _getenv("PATH");
printf("ready to path, %s\n", cmd);
if (path_env)
{
  printf("In loop\n");
path_envcpy = _strdup(path_env);
cmd_len = _strlen(cmd);
tkn = strtok(path_envcpy, ":");
 printf("we wa\n");
 printf("%s\n", path_envcpy);
 while (tkn != NULL)
{
directory_len = _strlen(tkn);
file_path = malloc(cmd_len + directory_len + 2);
_strcpy(file_path, tkn);
_strcat(file_path, "/");
_strcat(file_path, cmd);
_strcat(file_path, "\0");
printf("ready to stat, %s\n", file_path);
if (stat(file_path, &buff) == 0)
{
free(path_envcpy);
printf("stat confirmed");
return (file_path);
}
else
{
free(file_path);
tkn = strtok(NULL, ":");
}
}
free(path_envcpy);
if (stat(cmd, &buff) == 0)
{
return (cmd);
}
else
{
perror("Command not found");
return (NULL);
}
}
return (NULL);
}
