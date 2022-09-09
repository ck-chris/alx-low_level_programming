#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Assign a random number to the variable n each time it is executed
 * and print out based on condition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{

		printf("%d is zero\n", n);
	}
	else
	{

		printf("%d is negative\n", n);
	}
	return (0);
}