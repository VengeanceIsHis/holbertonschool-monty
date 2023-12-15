#include "monty.h"
char **convert(char *str)
{
  char **strDoublePtr =	(char **)malloc(sizeof(char *));
  *strDoublePtr	= strdup(str);
  return (strDoublePtr);
}
