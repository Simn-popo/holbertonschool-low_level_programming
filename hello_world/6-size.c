#include <studio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("size of int: %d bytes\n", sizeof(int));
	printf("size of float: %d bytes\n", sizeof(float));
	printf("size of double: %d bytes\n", sizeof(double));
	printf("size of char: %d bytes\n", sizeof(char));
	return (0);
}
