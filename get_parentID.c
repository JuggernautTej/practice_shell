#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

/**
 * main - Entry to the function that prints the parent process ID.
 * Return: Always 0.
 */
int main(void)
{
  pid_t my_pid;
  pid_t parent;
  my_pid = getpid();
  parent = getppid();
  printf("my_id is %u\n parent is %u\n", my_pid, parent);
  return (0);
}
