#include "monty.h"
/**
 * pint - function that pint
 * @stack: the stack
 * @line: th e line
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line)
{

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u:can't pint, stack empty\n", line);
		freedom(1);
	}
	printf("%i\n", (*stack)->n);
}
