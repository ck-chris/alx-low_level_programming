#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and utilize it with a specific char
 * @size: integer parameter, contained in the array
 * @c: integer parameter, contained in the array
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
