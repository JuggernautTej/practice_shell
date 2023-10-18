#ifndef SHELL_H
#define SHELL_H
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

int _strlen(char *strg);
int _printstrg(char *strg);
char *our_prompt(void);
char **tokenize(char *strg);
char *_strdup(char *strg);
#endif
