#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s: the used string to beb reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int d, b, c;
	char *a, temp;

	a = s;

	while (s[b] != '\0')
	{
		c++;
	}
	for (c = 1; c < b; c++)
	{
		a++;
	}
	for (d = 0; d < (b / 2); d++)
	{
		temp = s[d];
		s[d] = *a;
		*a = temp;
		a++;
	}
}

