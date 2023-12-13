#include "monty.h"
void push(stack_t **stack, unsigned int line_number, int n)
{
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
