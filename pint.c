#include "monty.h"

extern bus_t bus; /* Assuming bus_t is declared in another file */

/**
 * f_pint - prints the top value of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the command in the file
 * Return: no return
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
