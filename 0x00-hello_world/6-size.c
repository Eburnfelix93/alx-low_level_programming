#include <stdio.h>
/**
 * main - prints the size of data types
 * Returns 0 if executed properly
 */
int main(void)
{
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	printf("size of double: %d byte(s)\n", sizeof(double));
	printf("size of char: %d byte(s)\n", sizeof(char));
	return (0);
}
