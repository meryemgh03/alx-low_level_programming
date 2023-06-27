#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
