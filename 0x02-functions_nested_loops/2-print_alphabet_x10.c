#include "main.h"
/**
 *print_alphabet_x10 - print alphabets in lowercase ten times
 *Retutn: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
