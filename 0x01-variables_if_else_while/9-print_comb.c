#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
