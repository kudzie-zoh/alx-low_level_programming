#include "../main.h"

/**
  * main - Entry point
  *
  * Description: Test code for Array elements counter
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	int Array[] = {30, 400, 25, 80, 40, 25, 1};
	int num = 7;

	Counter(Array, num);

	for (i = 0; i < num; i++)
		Array[i] = 0;

	Counter(Array, num);

	return (0);
}
