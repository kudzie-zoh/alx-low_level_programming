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
	char ch = 'a', CH = 'A';
		while (ch <= 'z')
		{
			putchar(ch);
			++ch;
		}
		while (CH <= 'Z')
		{
			putchar(CH);
			++CH;
		}
	putchar('\n');
	return (0);
}
