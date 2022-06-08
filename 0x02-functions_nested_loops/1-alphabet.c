#include "main.h"
/**
 * desc:  prints the alphabet, in lowercase.
 */
void print_alphabet(void)
{
	char put;

	for (put = 'a'; put <= 'z'; put++)
		_putchar(put);
	_putchar('\n');
}
