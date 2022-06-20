#include "main.h"
#include <stdio.h>
/**
 * _memset - Fill n with a constant byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Returns: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
