#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
