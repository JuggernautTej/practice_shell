#include<stdio.h>
#include<unistd.h>
/**
 * main - program entry point.
 * argc: argument count.
 * argv: argument vector.
 * env: environment variable.
 * Return: Always 0.
 */
int main(int argc, char **argv, char **env)
{
  extern char **environ;
  printf("%p :env address\n%p :environ address\n", (void *)env, (void *)environ);
  return (0);
}
