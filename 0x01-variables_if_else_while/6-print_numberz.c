#include <stdio.h>
/**
 * main - print all single digits number from base 10 using putchar()
 * Return: 0 Always (Success)
 */
int main(void)
{
	int decimal = 0;

	while (decimal <= 9)
	{
		putchar((decimal % 10) + '0');
		decimal++;
	}
	putchar('\n');
	return (0);
}
