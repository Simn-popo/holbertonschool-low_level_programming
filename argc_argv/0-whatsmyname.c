#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if no error
 */

int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
