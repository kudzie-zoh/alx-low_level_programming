#include "main.h"

void time_table(int n, int m)
{
	int a, b, prod;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= m; b++)
		{
			prod = a * b;
			if ( prod > 9)
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else
				_putchar(prod + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
