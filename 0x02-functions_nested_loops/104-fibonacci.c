#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long count, sum;

	printf("%lu, %lu, ", a, b);
	for (count = 2; count <= 98; count++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (count != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
