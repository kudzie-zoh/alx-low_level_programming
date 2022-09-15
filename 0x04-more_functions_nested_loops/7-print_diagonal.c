#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: number of times the '\' character should be printed
 */

void print_diagonal(int n)
{
	int postn = 1;
	int space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			if (postn == 1)
			{
				_putchar(92); /*The ASCII of '/'*/
				_putchar('\n');
			}
			else if (postn > 1)
			{
				for (space = 2; space <= postn; space++)
					_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
		}
	}
}
