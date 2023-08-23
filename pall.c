#include "monty.h"

/**
 * pall - function that prints all elements in the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: line number being processed and is unused.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *stack;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
