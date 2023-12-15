#include "monty.h"
void push_op(stack_t **stack, unsigned int line_number, int n)
{
  (void)line_number;
  stack_t *new = malloc(sizeof(stack_t));
  if (new != NULL && n)
    {
      new->n = n;
      new->next = *stack;
      *stack = new;
    }
  else
    {
      perror("L<line_number>: usage: push integer\n");
      exit(EXIT_FAILURE);
    }
}
