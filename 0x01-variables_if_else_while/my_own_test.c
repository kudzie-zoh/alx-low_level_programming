#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: My second alternative code of 2 by 2 C Program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d1 = 0, d2;

	while (d1 < 100)
	{
		d2 = 1;
		while (d2 < 100)
		{
			if (d2 > d1)
			{
				putchar((d1 / 10) + 48);
				putchar((d1 % 10) + 48);
				putchar(' ');
				putchar((d2 / 10) + 48);
				putchar((d2 % 10) + 48);
				if (((d1 *100) + d2) != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++d2;
		}
		++d1;
	}
	putchar('\n');
	return (0);
}
