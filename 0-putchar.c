#include <unistd.h>

/**
 * _putchar - writes the character ch
 * @ch: The character to print
 * Return: 0
 * On error, -1 is returned
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
