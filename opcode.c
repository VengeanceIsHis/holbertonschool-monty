#include "monty.h"
void main()
{
  int line = 0;
  char buffer[100];
  size_t len;
  char *input;
  char **new;
  char (*func)(stack_t **stack, unsigned int line_number);
  while (1)
    {
      line++;
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
      new = convert(input);
      if (func = get_op(new, line));
  printf("func: %s", func);
    }
}
