#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer arggument
 * @av: pointer to a pointer that holds a character or a string
 * Return: astring or NULL in failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, length, idx;
	char *conc;

	idx = 0;
	length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; *(*(av + i) + j); j++)
			length++;

	conc = malloc((length + ac + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*(conc + idx) = *(*(av + i) + j);
			idx++;
		}
		*(conc + idx) = '\n';
		idx++;
	}
	*(conc + idx) = '\0';
	return (conc);
}
