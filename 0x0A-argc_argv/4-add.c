#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two number
 * @argc: Argument Count
 * @argv: Arguments Vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
