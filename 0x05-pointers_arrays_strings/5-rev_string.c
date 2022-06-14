#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s: the used string to beb reversed
 * Return: 0
 */
void rev_string(char *s)
{
int z, i, H;
char temp;
for (z = 0; s[z] != '\0'; z++)
;
i = 0;
H = z / 2;
while (H--)
{
temp = s[z - i - 1];
s[z - i - 1] = s[i];
s[i] = temp;
i++;
}
}
