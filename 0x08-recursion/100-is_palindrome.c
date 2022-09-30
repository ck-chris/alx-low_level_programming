#include "main.h"

/**
 * s_len - calculates the length of a string
 * @s: original string
 * Return: length of the string
 */
int s_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + s_len(s + 1));
	}
}

/**
 * pal - checks if a string is a palindrome
 * @s: original string
 * @i: initial point of recursion
 * @len: lenght of a string
 * Return: 1 if is palindrome otherwise 0
 */
int pal(char *s, int i, int len)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
	{
		return (1);
	}
	else if (*(s + i) != *(s + len - 1 - i))
	{
		return (0);
	}
	else
	{
		return (pal(s, i + 1, len));
	}
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: original string
 * Return: 1 or 0 if not
 */
int is_palindrome(char *s)
{
	if (pal(s, 0, s_len(s)) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
