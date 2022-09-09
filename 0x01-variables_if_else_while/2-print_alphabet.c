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
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
