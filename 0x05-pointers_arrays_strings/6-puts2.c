#include "main.h"
/**
 * puts2 - Prints every other character of string
 * @str: The string to be printed
 *
 * Return: Void
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
