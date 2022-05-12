#include "monty.h"
/**
 *pall - function that pall
 *@stack: stack
 * Return: void
 */
void pall(stack_t **stack)
{
	stack_t *temp;

	if (*stack)
		temp = *stack;
	else
		exit(EXIT_FAILURE);
	while (temp != NULL)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
}
