#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a character
 * @c: integer
 * Return: a string or 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
