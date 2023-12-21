#include "monty.h"
int exec(char *content, stack_t **stack, unsigned int line_number, FILE *file)
{
  instruction_t op[] = {
			{"push", push_op},
			{"pall", pall_op}
  };
  unsigned int i = 0;
  char *oper;
  oper = strtok(content, " \n\t");
  if (oper && oper[0] == '#')
    return (0);
  bus.arg = strtok(NULL, " \n\t");
  while (op[i].opcode && oper)
    {
      if (strcmp(oper, op[i].opcode) == 0)
	{
	  op[i].f(stack, line_number);
	  return (0);
	}
      i++;
    }
  if (oper && op[i].opcode == NULL)
    {
      fprintf(stderr, "L%d: unknown instruction %s\n", line_number, oper);
      fclose(file);
      free(content);
      free_stack(*stack);
      exit(EXIT_FAILURE);
    }
      return (1);
    }
