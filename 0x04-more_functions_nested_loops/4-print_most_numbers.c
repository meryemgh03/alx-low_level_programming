#include "main.h"
/**
 * print_most_numbers - Print the numbers since 0 up 9
 * Description: prints the numbers excluding 2 and 4
 * Return: The numbers
 */
void print_most_numbers(void)
{
	int y = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
