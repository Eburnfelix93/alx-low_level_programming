#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return:Always 0.
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'q' && b != 'e')
		{
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
