#include "main.h"
/**
 * print_triangle - prints triangle with #
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int s, row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (s = 0; s < (size - 1) - row; s++)
			{
				_putchar(' ');
			}
			for (col = 0; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
