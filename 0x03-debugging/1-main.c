#include <stdio.h>

/**
 * main - cause an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
	{
		putchar(i);

		 /**
		  * while (i < 10)
		  * i is not increased and will always remain as 1
		  */
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}