#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 *
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *x;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	x = malloc((sizeof(char) * i) + 1);

	if (x == NULL)
		return (NULL);

	while (a < i)
	{
		x[a] = str[a];
		a++;
	}
	x[a] = '\0';
	return (x);
}
