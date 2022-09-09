#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - It will return the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	srand(time(0));
	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
	putchar('\n');
	return (0);
}
