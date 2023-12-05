#include "shell.h"

/**
 * our_prompt - a function that displays a prompt and takes a command.
 * Return: a character pointer to the user input.
 */
char *our_prompt(void)
{
char *s_buf, *c = "$ ";
size_t s_bufsize = 128;
ssize_t in;
s_buf = (char *)malloc(s_bufsize * sizeof(char));
if (s_buf == NULL)
exit(1);
_printstrg(c);
in = getline(&s_buf, &s_bufsize, stdin);
if (in == -1)
{
if (in == EOF)
{
write(STDOUT_FILENO, "\n", 1);
exit(1);
}
else
{
perror("Error reading input");
exit(1);
}
}
return (s_buf);
}
