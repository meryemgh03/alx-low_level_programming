#include <unistd.h>
/**
 * _putchar - writes the character n to stdout
 * @n: The character to print
 * Return: 1
 * On error, -1 is returned
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
