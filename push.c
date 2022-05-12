#include "monty.h"
/**
 * push-push
 * @stack:stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = malloc(sizeof(stack_t));

	if (temp == NULL)
	{
		exit(EXIT_FAILURE);
	}
	temp->n = line_number;
	temp->prev = NULL;
	temp->next = *stack;
	if (*stack)
	{
		(*stack)->prev = temp;
	}
	*stack = temp;
}
