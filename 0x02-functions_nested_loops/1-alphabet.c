#include <main.h>
/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char put;

	for (put = 'a'; put <= 'z'; put++)
		_putchar(put);
	_putchar('\n');
}
