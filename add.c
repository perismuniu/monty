#include "monty.h"

/**
 * add - function that ass the top two elements of a stack.
 * @stack: The pointer to the top of the stack.
 * @line_number: The line number being processed.
 *
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		(*stack)->next->n += (*stack)->n;
		temp = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		free(temp);
	}
}
