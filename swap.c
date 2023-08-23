#include "monty.h"

/**
 * swap -function that swaps the top two elements of the stack.
 * @stack: The pointer to the top of the stack.
 * @line_number: The line number being processed.
 *
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
}
