#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, x;

	while (s[i])
	{
		x = 0;
		while (accept[x])
		{
			if (s[i] == accept[x])
			{
				s += i;
				return (s);
			}
			x++;
		}
		i++;
	}
	return ('\0');
}
