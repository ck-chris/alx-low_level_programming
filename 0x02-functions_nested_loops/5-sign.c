#include "main.h"
/**
 * print_sign - prints  the sign of number
 * @n: the variable to print
 * Return: 1 and prints + if n is positive, -1 and prints - when n is negative
 * otherwise  0 and prints 0 if n equals to 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
