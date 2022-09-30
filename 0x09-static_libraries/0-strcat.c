#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first string
 * @src: string to append to the string
 * Return: the pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0, i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
