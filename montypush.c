#include "monty.h"

/**
 * main - intilize n 
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
		return 1;
	}
	return 0;
}
/**
 * push - Pushes an element to the stack
 * @stack: pointer to head of stack
 * @n: variable
 * Return: address of new element
 */

void push(stack_t **stack, unsigned int line_number)
{

        stack_t *new, *j = *stack;

        if (stack == NULL)
        {
                fprintf(stderr, "L%d: usage: push integer", line_number);
                exit(EXIT_FAILURE);
        }
        new = malloc(sizeof(stack_t));
        if (new == NULL)
                exit(EXIT_FAILURE);
        new->prev = NULL;
        new->n = 2;
        new->next = *stack;
	if (*stack)
                j->prev = new;
        *stack = new;
}
