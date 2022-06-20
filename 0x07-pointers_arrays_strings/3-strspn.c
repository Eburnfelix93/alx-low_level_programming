#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in the init segment
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int z = 0;
int x;

while (accept[i])
{
x = 0;
while (s[x] != 32)
{
if (accept[i] == s[x])
{
z++;
}
x++;
}
i++
}
return (z);
}

