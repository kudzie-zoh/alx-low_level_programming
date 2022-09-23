#include <stdio.h>

int increment(int a)
{
	a = a + 1;
	return (a);
}

int main(void)
{
	int a;

	a = 10;
	a = increment(a);
	printf("a = %d\n", a);
	return (0);
}
