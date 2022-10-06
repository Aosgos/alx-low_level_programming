#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
