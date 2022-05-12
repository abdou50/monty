#include "monty.h"
/**
 *pall - function that pall
 *@stack: stack
 *@line_number:line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	size_t count = 0;
	(void)line_number;

	if (!stack)
		return;
	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		count++;
	}

}
