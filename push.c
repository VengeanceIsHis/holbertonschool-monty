#include "monty.h"
void push_op(stack_t **stack, unsigned int line_number)
{
  int n, j = 0, flag = 0;
  if (bus.arg)
    {
      if (bus.arg && bus.arg[0] == '-')
	j++;
      for (; bus.arg[j] != '\0'; j++)
	{
	  if (bus.arg[j] > '9' || bus.arg[j] < '0')
	    flag = 1;
	}
      if (flag == 1)
	{
	  fprintf(stderr, "L%d: usage: push integer\n", line_number);
	  fclose(bus.file);
	  free(bus.content);
	  free_stack(*stack);
	  exit(EXIT_FAILURE);
	}
    }
  else
    {
      fprintf(stderr, "L%d: usage: push integer\n", line_number);
      fclose(bus.file);
      free(bus.content);
      free_stack(*stack);
      exit(EXIT_FAILURE);
    }
  n = atoi(bus.arg);
  if (bus.lifi == 0)
    addnode(stack, n);
  else
    addqueue(stack, n);
}
