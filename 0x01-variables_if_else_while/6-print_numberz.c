#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
