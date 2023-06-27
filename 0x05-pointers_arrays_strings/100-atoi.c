#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int ch = 0;
	unsigned int n = 0;
	int min = 1;
	int isi = 0;

	while (s[ch])
	{
		if (s[ch] == 45)
		{
			min *= -1;
		}
		while (s[ch] >= 48 && s[ch] <= 57)
		{
			isi = 1;
			n = (n * 10) + (s[ch] - '0');
			ch++;
		}
		if (isi == 1)
		{
			break;
		}
		ch++;
	}
	n *= min;
	return (n);
}
