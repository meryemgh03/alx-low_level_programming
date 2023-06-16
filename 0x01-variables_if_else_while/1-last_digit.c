#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - Print the last digit of the number stored in the variable n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod  = n % 10;
	if (mod > 5)
		printf("the last digit of %d is %d, and is greater than 5\n", n, mod);
	else if (mod == 0)
		printf("the last digit of %d is %d, and is 0\n", n, mod);
	else if (mod < 6 && mod != 0)
		printf("the last digit of %d is %d, and is less than 6 and not 0\n", n, mod);
	return (0);
}
