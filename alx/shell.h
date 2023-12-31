#ifndef SHELL_H
#define SHELL_H
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<sys/types.h>

int _strlen(char *strg);
int _printstrg(char *strg);
char *our_prompt(void);
char **tokenize(char *strg);
char *_strdup(char *strg);
void free_dog(char **doggy);
void exec_cmd(char **command);
char *_getenv(char *name);
int _strcmp(char *s1, char *s2);

extern char **environ;
#endif
