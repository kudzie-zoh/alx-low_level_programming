#include "main.h"

/**
  * fibonacci_seq - function that prints a given fibonacci sequence
  *
  * @n: the sequence length
  *
  * Return: Nothing
  */

void fibonacci_seq(int n)
{
	int a = 0, b = 1;
	int pos, sum;

	if (n <= 0)
		printf("No sequence.\n");
	else
	{
		sum = 1;
		printf("%d, ", sum);
		for (pos = 1; pos < n; pos++)
		{
			sum = a + b;
			a = b;
			b = sum;
			if (pos != (n - 1))
				printf("%d, ", sum);
			else
				printf("%d. (end)", sum);
		}
		printf("\n");
	}
}

