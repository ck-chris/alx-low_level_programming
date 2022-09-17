#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long  num, divisor;

	num = 612852475143;
	for (divisor = 2; divisor < number; divisor++)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
		}
	}
	printf("%ld\n", divisor);
	return (0);
}
