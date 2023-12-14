#include "monty.h"
void (*get_op(char **input))(stack_t **stack, unsigned int line_number)
  {
    instruction_t op[] = {
		    { "push", push_op },
		    { "pall", pall_op }
    };
    int i = 0;
    while (i < 2)
      {
	if (strcmp(op[i].opcode, *input) == 0)
	  {
	    return (op[i].f);
	  }
	i++;
      }
	return default_op;
  }
