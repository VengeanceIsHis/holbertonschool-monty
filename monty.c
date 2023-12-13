#include "monty.h"
void main()
{
  char buffer[100];
  size_t len;
  char **input;
  char (*func)(stack_t **stack, unsigned int line_number);
  while (1)
    {
      if ((input = fgets(buffer, sizeof(buffer), stdin)) != NULL)
    {
      len = strlen(buffer);
      if (len > 0 && buffer[len - 1] == '\n')
	buffer[len - 1] = '\0';
    }
  else
    {
      perror("USAGE: monty file");
      break;
    }
      func = get_op(input);
  printf("func: %s", func);
    }
}
