#include "main.h"

/**
 * _strlen_recursion - gives the length of a string
 * @s: pointer to a string
 * Return:an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
