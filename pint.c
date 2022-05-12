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
		fprintf(stderr, "L<%d>:can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
