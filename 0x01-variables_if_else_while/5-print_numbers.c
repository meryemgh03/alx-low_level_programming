#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
