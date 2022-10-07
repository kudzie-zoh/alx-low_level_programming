#include "main.h"

/**
  * main - Entry point
  *
  * Description: A program that prints out an asterisc triangle
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, j;
	int width = 7;
	int height = 4;

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if ((i == 1) && (j == 4))
				_putchar('*');
			else if ((i == 2) && (j > 2) && (j < 6))
				_putchar('*');
			else if ((i == 3) && (j > 1) && (j < 7))
				_putchar('*');
			else if (i == 4)
				_putchar('*');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	return (0);
}
