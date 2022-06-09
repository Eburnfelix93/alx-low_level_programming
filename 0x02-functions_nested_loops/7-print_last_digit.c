#include "main.h"
/**
 * print_last_digit - prints last digit of integer input
 * @int: integer to modify
 *
 * Return: Value of the last digit
 */
int print_last_digit(int)
{
int l, p;

l = n % 10;
if (l <  0)
l = -l;
p = '0' + l;
_putchar(p);
return (l);
}
