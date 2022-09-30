#include "main.h"

/**
 * _strncpy - copies n bytes of source into buffer of destination string
 * @dest: copy source to this buffer
 * @src: the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
