#include <stdio.h>
/**
 * main - prints the size of data types
 * Returns 0 if executed properly
 */
int main(void)
{
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of double: %zu bytes\n", sizeof(double));
	printf("size of char: %zu bytes\n", sizeof(char));
	return (0);
}
