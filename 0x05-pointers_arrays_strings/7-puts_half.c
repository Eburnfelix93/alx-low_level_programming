#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int d;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		d = (i - 1) / 2;
		d += 1;
	}
	else
	{
		d = i / 2;
	}
	for (; d < i; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
