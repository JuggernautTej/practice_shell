#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <unistd.h>

/**
 * check_cmd - a function that checks if a command is found.
 * cmd: the pointer containing the string.
 * Return: void.
 */
void check_cmd(char *cmd)
{
if (access(cmd, F_OK) == 0)
printf("%s: FOUND FILE\n", cmd);
else
printf("FILE NOT FOUND\n");
}

/**
 * main - entry point of function.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
  if (argc > 1)
    {
      check_cmd(argv[1]);
    }
  return (0);
}
