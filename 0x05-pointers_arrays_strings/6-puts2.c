#include "main.h"
/**
 * puts2 - Prints every other character of string
 * @str: The string to be printed
 *
 * Return: Void
 */
void puts2(char *str)
{
int i;
int d;

while (str[i] != '\0')
{
d++;
}
for (i = 0; i < d; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
