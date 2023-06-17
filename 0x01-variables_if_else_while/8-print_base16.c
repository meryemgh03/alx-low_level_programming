#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Hexadicimal
 * Return: 0
 */
int main(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
