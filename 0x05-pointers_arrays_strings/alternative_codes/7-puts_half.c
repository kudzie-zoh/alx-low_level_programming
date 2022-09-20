#include "../main.h"

/**
  * puts_half - prints half of the string given
  * @str: parameter from main
  */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i / 2) + 1; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
