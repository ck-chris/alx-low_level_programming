#include <stdio.h>
/**
 * main - print alphabet in lowercase and skip q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'q') && (lower != 'e'))
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
