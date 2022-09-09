#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that prints digits using the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		/*convert digit to ASCII representation*/
		putchar(n + '0');
		++n;
	}
	putchar('\n');
	return (0);
}
