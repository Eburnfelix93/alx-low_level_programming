#include<stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 *
 * Return: Always (SUCCESS).
 */
int main(void)
{
	int d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
