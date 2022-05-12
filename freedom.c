#include "monty.h"
/**
 * freedom - frees the struct
 * @status: 0 success 1 error
 */

void freedom(int status)
{
	fclose(tst.fb);
	if (tst.line)
		free(tst.line);
	free_stack();
	if (status == 0)
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}

/**
 * free_stack - frees a list
 **/
void free_stack(void)
{
	stack_t *head = tst.stack;
	stack_t *temp;

	while (head != NULL)
	{
		temp = (*head).next;
		free(head);
		head = temp;
	}
	head = NULL;
}
