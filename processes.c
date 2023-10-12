#include<stdio.h>
#include<unistd.h>

/**
 * main - program entry point
 * Return: Always 0.
 */
int main(void)
{
  pid_t current_id, parent_id;
  current_id = getpid();
  parent_id = getppid();
  printf("process:%u\n parent:%u\n", current_id, parent_id);
  return(0);
}
