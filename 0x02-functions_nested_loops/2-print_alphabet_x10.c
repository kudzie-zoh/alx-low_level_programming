#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int line;
	char ch;

	for (line = 1; line < 11; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
