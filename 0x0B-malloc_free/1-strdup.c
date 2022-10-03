#include "main.h"

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int i, l;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	for (l = 0; str[l] != '\0'; l++)
		;

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}
