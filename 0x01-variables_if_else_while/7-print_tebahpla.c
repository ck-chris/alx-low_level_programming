#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_low = 'z';

	while (alpha_low >= 'a')
	{
		putchar(alpha_low);
		alpha_low--;
	}
	putchar('\n');
	return (0);
}
