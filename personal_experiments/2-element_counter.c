#include "main.h"

/**
  * counter - a prototype for counting a specific element
  * @A: pointer to the Array given
  * @n: the number of elements in the Array
  *
  * Return: Nothing
  */

void Counter(int *A, int n)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		if (A[i] == 25)
			count++;
		else
			continue;
	}
	if (count == 0)
		printf("There are no 25s in this Array.\n");
	else
		printf("There are %d 25s in this Array.\n", count);
}
