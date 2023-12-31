#include "shell.h"

/**
 * our_prompt - a function that displays a prompt and takes a command.
 * Return: a character pointer to the user input.
 */
char *our_prompt(void)
{
char *s_buf = NULL, *c = "$ ";
size_t s_bufsize = 0;
ssize_t in;
if (isatty(STDIN_FILENO))
{
_printstrg(c);
fflush(stdout);
}
in = getline(&s_buf, &s_bufsize, stdin);
if (in == -1)
{
if (in == EOF)
{
_printstrg("\n");
free(s_buf);
exit(1);
}
else
{
perror("Error reading input");
free(s_buf);
exit(1);
}
}
if (s_buf[in - 1] == '\n')
{
s_buf[in - 1] = '\0';
}
return (s_buf);
}
