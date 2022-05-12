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
	stack_t *temp, *temp2;

	(void)stack;
	(void)ln;

	temp = *stack;

	if (temp != NULL) 
	{
		temp2 = (*temp).next;
		if (temp2 != NULL)
			(*temp2).prev = NULL;
		free(temp);
		temp = temp2;
		*stack = temp;
	}
	else

	{
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", line);
		freedom(1);
	}
}
