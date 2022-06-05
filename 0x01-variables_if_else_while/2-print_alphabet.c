#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 *
 * Return: 0.
 */
int main(void)
{
char (alpha);

srand(time(0));
n = rand() - RAND_MAX / 2;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');

getalpha();
}
