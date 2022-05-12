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
		tst.line[a - 1] = '\0';
		tst.ln++;
		tst.arg = strtok(tst.line, " \t\a\n");
		tst.data = strtok(NULL, " \t\a\n");

		if (tst.arg != NULL)
		{
			if (tst.arg[0] != '#')
			{
				if (strcmp(tst.arg, "nop") != 0)
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
