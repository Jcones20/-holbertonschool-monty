#include "monty.h"

/**
 * pall - Print all values on the stack
 * @stack: pointer to head of stack
 * @line_num: file's line number
 * Return: Void
 */

void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *j = *stack;
	(void)line_num;

	while (j)
	{
		printf("%d\n", j->n);
		j = j->next;
	}
}
