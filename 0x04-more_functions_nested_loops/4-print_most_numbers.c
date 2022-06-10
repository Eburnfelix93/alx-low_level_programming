#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
int b;

for (b = 0; b <= 9; b++)
{
if (b != 2 && b != 4)
_putchar((b % 10) + '0');
}

_putchar('\n');
}
