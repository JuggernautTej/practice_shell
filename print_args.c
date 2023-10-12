#include "shell.h"

/**
 * main - function entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)),char **argv)
{
int count = 0;
while (argv[++count])
{
_printstrg(argv[count]);
}
return(0);
}
