#include "main.h"

int _sqrt_recursion(int n)
{
	int i = 2;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	if ((i * i) == n)
		return (i);
	else if ((i * i) < n)
	{
		i = find_sqr((i + 1), n);
	}
	return (i);
}

int find_sqr(int i, int n)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) < n)
		i = find_sqr((i + 1), n);
	else
		i = -1;
	return (i);
}
