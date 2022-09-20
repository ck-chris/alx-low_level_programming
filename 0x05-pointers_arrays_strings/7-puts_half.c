#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int idx;
	int len = _strlen(str);

	if (len % 2 != 2)
	{
		idx = (len / 2) + 1;
	}
	else
	{
		idx = (len / 2);
	}

	while (idx < len)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
