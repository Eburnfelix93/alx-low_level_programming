#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i = 0, x = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		x = atoi(argv[2]);
		printf("%d\n", i * x);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
