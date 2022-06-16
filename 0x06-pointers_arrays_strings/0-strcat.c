#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d = 0;

	while (dest[i++])

		d++;

	for (i = 0; src[i]; i++)

		dest[d++] = src[i];

	return (dest);
}
