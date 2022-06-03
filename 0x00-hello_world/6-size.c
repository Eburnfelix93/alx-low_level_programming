#include <stdio.h>
/**
 * main - prints the size of data types
 * Returns 0 if executed properly
 */
int main(void)
{
printf("size of int is=%i byte(s)\n", (unsigned long)sizeof(int));
printf("size of float is=%i byte(s)\n", (unsigned long)sizeof(float));
printf("size of long int is=%i byte(s)\n", (unsigned long)sizeof(long int));
printf("size of char is=%i byte(s)\n", (unsigned long)sizeof(char));
printf("size of double is=%i byte(s)\n", (unsigned long)sizeof(double));
return (0);
}
