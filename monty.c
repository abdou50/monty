#include "monty.h"

/**
 * main - interpretur main
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 succes
 **/
int main(int argc, char **argv)
{
	size_t len = 0;
	int a;

	help();
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	tst.fb = fopen(argv[1], "r");
	if (tst.fb == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((a = getline(&tst.line, &len, tst.fb)) != -1)
	{
		tst.ln++;
		tst.arg = strtok(tst.line, " ");
		tst.data = strtok(NULL, " ");

		if (tst.arg != NULL)
		{
			if (tst.arg[0] != '#')
			{
				if (strcmp(tst.arg, "nop"))
				{
					if (instruction() != 0)
					{
						fprintf(stderr, "L%u: unknown instruction %s\n", tst.ln, tst.arg);
						freedom(1);
					}
				}
			}
		}
	}
	freedom(0);
	return (EXIT_SUCCESS);
}
