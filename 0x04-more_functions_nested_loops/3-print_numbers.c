#include "main.h"

/**
 * print_numbers -  Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar((c % 10) + '0');

	putchar('\n');
}
