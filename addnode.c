#include "monty.h"
void addnode(stack_t **stack, int n)
{
  stack_t *new, add;
  add = *stack;
  new = malloc(sizeof(stack_t));
  if (new == NULL)
    {
      printf("Error\n");
      exit(0);
    }
  if (add)
    {
    add->prev = new;
  new->n = n;
  new->next = *stack;
  new->prev = NULL;
  *stack = new;
}
}
