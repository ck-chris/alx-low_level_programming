#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
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
 * idx_num_starts - find index where digit is first found
 * @s: string to search
 * Return: integer index where digit is first found
 */

int idx_num_starts(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * find_sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int find_sign(char *s)
{
	int negative = 0, i = 0, sign = 1;

	while (i < (idx_num_starts(s)))
	{
		if (s[i++] == '-')
		{
			negative++;
		}
	}
	if (negative % 2 != 0)
	{
		sign = -1;
	}
	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int idx_digit_starts = (idx_num_starts(s)), i, t = 1;
	int sign, digits_to_print = 0, digit = (idx_num_starts(s));
	unsigned int num = 0;

	if (idx_digit_starts < 0)
	{
		return (0);
	}
	sign = find_sign(s);

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
		&& (idx_digit_starts <= _strlen(s)))
	{
		digits_to_print += 1;
		idx_digit_starts++;
	}

	i = 1;

	while (i < digits_to_print)
	{
		t *= 10;
		i++;
	}
	for (i = digit; i < (digit + digits_to_print); i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}
	return (num * sign);
}
