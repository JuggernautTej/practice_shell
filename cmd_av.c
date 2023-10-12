#include<stdio.h>
#include<string.h>

/**
 * split_strg - a function that splits a string
 * @strg: strg to be split.
 * Return: the split string.
 */
char *split_strg(char *strg)
{
  int x;
  char *result, *tkn;
  tkn = strtok(strg, " ");
  while (tkn)
    {
      result[x] = strtok(strg, " ");
      x++;
    }
  return(result);
}
