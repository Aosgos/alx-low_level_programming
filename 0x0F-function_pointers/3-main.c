#include "3-calc.h"

/**
 * main - performs arithmetic operations
 * @argc: argument count
 * @argv: vector
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*func)(int, int);

	if (argc == 4)
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);

		func = get_op_func(argv[2]);
		if (!func)
		{
			printf("Error\n");
			exit(99);
		}

		printf("%d\n", func(i, j));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
