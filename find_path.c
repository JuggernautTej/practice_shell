#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

/**
 * check_cmd - a function that checks if a command is found.
 * @cmd: the pointer containing the string.
 * Return: void.
 */
void check_cmd(char *cmd)
{
  if (access(cmd, F_OK) == 0)
    {
      printf("%s: FOUND FILE\n", cmd);
    }
  else
    printf("FILE NOT FOUND\n");
}

/**
 * main - entry point.
 * Return: Always 0.
 */
int main(void)
{
  char *tkn, *buff = NULL;
  size_t buffsize = 0;
  while (1)
    {
      write(1,"#cisfun$ ", 9);
      getline(&buff, &buffsize, stdin);
      tkn = strtok(buff, " \n");
      if (strcmp(tkn, "_which") == 0)
	{
	  tkn = strtok(NULL, " \n");
	  while (tkn)
	    {
	      check_cmd(tkn);
	      tkn = strtok(NULL, " \n");
	    }
	}
      else
	{
	  write(1, "COMMAND DOES NOT MATCH\n", 23);
	}
    }
  return(0);
}
