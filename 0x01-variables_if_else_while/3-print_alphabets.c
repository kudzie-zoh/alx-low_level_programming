#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that prints small and big caps alphabet
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
	char C = 'A';
		while (C <= 'Z')
		{
			putchar(C);
			++C;
		}
	putchar('\n');
	return (0);
}
