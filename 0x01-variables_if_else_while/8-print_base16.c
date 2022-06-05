#include <stdio.h>
/**
 * main - Prints Hexadecimal
 *
 * Return: Always(SUCCESS).
 */
int main(void)
{
	int E;

	for (E = '0'; E <= '9'; E++)
	{
		putchar(E);
	}
	for (E = 'a'; E <= 'f'; E++)
	{
		putchar(E);
	}
	putchar('\n');
	return (0);
}
