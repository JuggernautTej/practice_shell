#include "shell.h"

/**
 * main - a function that prints a command prompt and awaits user input.
 * Return: Always 0.
 */
int main(void)
{
char *s_buf, *c = "$ ";
size_t s_bufsize = 64;
ssize_t in;
s_buf = (char *)malloc(s_bufsize * sizeof(char));
if (s_buf == NULL)
exit(1);
_printstrg(c);
in = getline(&s_buf, &s_bufsize, stdin);
if (in == -1)
exit(1);
_printstrg(s_buf);
return(0);
}
