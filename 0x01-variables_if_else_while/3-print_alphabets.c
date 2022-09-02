#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0.
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
