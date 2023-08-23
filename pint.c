#include "monty.h"

/**
 * pint - function that prints the value at the top of the stack.
 * @stack: The pointer to the top of the stack
 * @line_number: line numer where pint opcode is encountered.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}
