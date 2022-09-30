#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: second string
 * Return: integer that specify the num of spaces i between
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;
	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
