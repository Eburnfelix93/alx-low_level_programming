#include <main.h>
/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
		}
		putchar('\n');
	}
}
