#include <stdio.h>
/**
 * main - print all hexadecimal numbers in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char letter =  'a';

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
