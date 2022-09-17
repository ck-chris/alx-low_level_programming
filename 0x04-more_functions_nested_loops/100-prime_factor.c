#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int number, i;

	number = 612852475143;
	for (i = 2; i < number; i++)
	{
		number = number / i;
	}
	printf("%ld\n", i);
	return (0);
}
