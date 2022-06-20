#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int x;

	while (s[i])
	{
		i++;
	}
	for (x = 0; x <= i; x++)
	{
		if (c == s[x])
		{
		s += x;
	}
	}
	return ('\0');
}
