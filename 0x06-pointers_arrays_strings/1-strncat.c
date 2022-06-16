#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[i++])
		d++;

	for  (i = 0; src[i] && i < n; i++)
		dest[d++] = src[i];

	return (dest);
}

