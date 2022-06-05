#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always (SUCCESS).
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);

		if (d != '9')
			continue;

		{

			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
