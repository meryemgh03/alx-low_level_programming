#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	int j;
	char ch;

	for (j = 0; j < 26; j++)
	{
		ch = 'a' + j;
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
