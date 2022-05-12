#include "monty.h"
/**
 * swap - function that swaps
 * @stack: the stack
 * @line: the line
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line)
{
	unsigned int x = 0;

	if (stack == NULL ||*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d:can't swap, stack too short\n", line);
		freedom(0);
	}
	x = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = x;
}
