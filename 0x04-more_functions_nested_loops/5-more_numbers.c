#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times and use _putchar 3 times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int count, num, row;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar((num / 10) + 48);
				num = num % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
