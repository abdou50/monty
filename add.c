#include "monty.h"
/**
 * add - function that adds
 *@stack: stack
 *@line_number: number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int x = 0;

	if (*stack && (*stack)->next)
	{
		x += (*stack)->n + (*stack)->next->n;
		pop(stack, line_number);
		}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
