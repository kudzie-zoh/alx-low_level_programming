#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that prints decimal digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		++n;
	}
	printf("\n");
	return (0);
}
