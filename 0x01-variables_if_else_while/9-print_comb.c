#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that prints digits seperated with a "," and " "
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++digit;
	}
	putchar('\n');
	return (0);
}
