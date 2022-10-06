#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: copies number of agument
 * @argv: copies array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
