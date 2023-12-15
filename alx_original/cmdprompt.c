#include "shell.h"

/**
 * my_prompt - a function that displays a prompt and take a command.
 * Return: a character pointer to the user input.
 */
char *my_prompt(void)
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
if (feof(stdin))
{
free(s_buf);
exit(EXIT_SUCCESS);
}
else
{
perror("Error reading input");
free(s_buf);
exit(EXIT_FAILURE);
}
}
if (s_buf[in - 1] == '\n')
{
s_buf[in - 1] = '\0';
}

if (s_buf[0] != '\0' && strspn(s_buf, " \t\n\r\f\v") == strlen(s_buf))
{
free(s_buf);
exit(EXIT_SUCCESS); /* Exit with status 0 if the input is just spaces */
}

return (s_buf);
}
