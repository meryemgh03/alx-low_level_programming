#include <unstd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character
 * Return: 1
 * On error, -1 is returned, and errno is set approriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
