#include "main.h"
#include <stdio.h>
/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
{
	printf("%d", a[d]);

	if (d != (n - 1))
	{
		printf(", ");
	}
}
printf("\n");
}
