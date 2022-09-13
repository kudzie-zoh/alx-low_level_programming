#include "main.h"

/**
 * _isalpha - checks for alphabetic characters using ASCII
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if true and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
