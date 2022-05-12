#include "monty.h"
/**
 * pop - function that delete
 * @stack: the stack
 * @line: th e line
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L<%d>:can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
