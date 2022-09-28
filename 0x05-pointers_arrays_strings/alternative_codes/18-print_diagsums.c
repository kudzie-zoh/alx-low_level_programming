#include "main.h"

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); ++i)
	{
		sum1 += a[i];
		i += size; 
	}
	printf("%d, ", sum1);

	for (i = (size - 1); i < ((size * size) - 1); i++)
	{
		sum2 += a[i];
		i += (size - 2);
	}
	printf("%d\n", sum2);
}
