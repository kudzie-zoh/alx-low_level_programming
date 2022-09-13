#include "main.h"

/**
 * _islower - function to check lowercase letters
 *
 * @c: checks input of function
 *
 * Return: 1 when 'c' is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
