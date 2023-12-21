#include "monty.h"
void pall_op(stack_t **stack, unsigned int line_number)
{
  stack_t **head;
  (void)line_number;

  h = *head;
  if (h == NULL)
    return;
  while (h)
    {
      printf("%d\n", h->n);
      h = h->next;
    }
}
