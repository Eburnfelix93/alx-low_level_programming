#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int a, b, c, d;

for (a = '0'; a <= '57'; a++)
{
for (b = '0'; b <= '57'; b++)
{
for (c = '0'; c <= '57'; c++)
{
for (d = '0'; d <= '57'; d++)
{
if (((c + d) > (a + b) && c >= a) || a < c)	
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a + b + c + d == 227 && c == 98)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
