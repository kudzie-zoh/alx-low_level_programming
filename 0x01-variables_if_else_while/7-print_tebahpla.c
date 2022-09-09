#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that prints small cap alphabet letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
