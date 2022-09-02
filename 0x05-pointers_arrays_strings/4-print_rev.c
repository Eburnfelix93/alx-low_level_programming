#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
		d++;
	}

	for (d -= 1; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
