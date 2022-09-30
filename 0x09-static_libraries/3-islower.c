#include "main.h"
/**
 * _islower - checks for lower case characters
 * @c: The character to print
 * Return: 1 if is lower case otherwisw 0
 */
int _islower(int c)
{
	char i;
	int check = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			check = 1;
		}
	}
	return (check);
}
