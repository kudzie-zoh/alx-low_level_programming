#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
			break;
	}
	if (s1[i] != '\0' && s2[i] == '\0')
		j = s1[i];
	else if (s1[i] == '\0' && s2[i] != '\0')
		j = s2[i];
	return (j);
}


