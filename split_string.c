#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * split_strg - a function that splits a string
 * @strg: strg to be split.
 * @tkn_nos: number of tokens to be printed.
 * Return: an array of split strings.
 */
char **split_strg(char *strg, int *tkn_nos)
{
char **result = NULL;
int x = 0;
char *tkn = strtok(strg, " ");
*tkn_nos = 0;
while (tkn != NULL)
{
(*tkn_nos)++;
tkn = strtok(NULL, " ");
}
result = (char **)malloc(((*tkn_nos) + 1) * sizeof(char *));
if (result == NULL)
{
perror("Memory allocation failed");
return NULL;
}
tkn = strtok(strg, " ");
while (tkn != NULL)
{
result[x] = (char *)malloc(sizeof (char *) * (strlen(tkn) + 1));
if (result[x] == NULL)
{
perror("Memory allocation failed");
free(result);
return NULL;
}
strcpy(result[x], tkn);
x++;
tkn = strtok(NULL, " ");
}
result[*tkn_nos] = NULL; 
return(result);
}

int main(void) {
    char str[] = "This is a test";
    int i, word_no = 0;
    char **tokens = split_strg(str, &word_no);
if (tokens != NULL)
{
for (i = 0; i < word_no; i++)
{
printf("Token %d: %s\n", i, tokens[i]);
}
free(tokens);
}
return 0;
}
