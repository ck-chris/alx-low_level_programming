#include "main.h"

/**
 * _strncat - check the code and combines two strings
 * @dest: Destination string
 * @src: source string
 * @n: number of bytes to copy
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
