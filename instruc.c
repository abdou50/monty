#include "monty.h"

/**
 * instruction - get the correct function
 * Return: pointer to the correct function
 **/

int instruction(void)
{
	int i;
	void (*f)();
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};
	for (i = 0; op[i].opcode; i++)
	{
		if (strcmp(tst.arg, op[i].opcode) == 0)
		{
			f = op[i].f;
			f(&tst.stack, tst.ln);
			return (0);
		}
	}
	return (1);
}
