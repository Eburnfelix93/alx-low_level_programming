#include <stdio.h>
/**
 * main - Prints Hexadecimal
 *
 * Return: Always(SUCCESS).
 */
int main(void)
{
	int E;

	for (E = '0'; E <= '15'; E++)
	{
		putchar(E);
	}
	for (E = 'a'; E <= 'z'; E++)
	{
		putchar(E);
	}
	putchar('\n');
	return (0);
}
