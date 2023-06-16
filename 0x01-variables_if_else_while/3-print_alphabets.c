#include <stdio.h>
/**
 * main - Lower and upper
 * Return: 0
 */
int main(void)
{
	char l;
	
	char u;
	
	l = 'a';
	u = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
