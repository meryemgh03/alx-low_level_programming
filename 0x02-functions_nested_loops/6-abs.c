#include "main.h"
/**
 * _abs - Coputes the absolute value of an integer
 * @c: The number
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}
