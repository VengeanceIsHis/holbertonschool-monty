#include "monty.h"
/**
*/
void free_stack(stack_t *stack)
{
stack_t *a;
a = stack;
while (stack)
{
a = stack->next;
free(stack);
stack = a;
}
}