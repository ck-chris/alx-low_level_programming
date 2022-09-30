#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: a character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
