#include "main.h"

/**
 * _strlen - check the length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copy the string pointed to by src ncluding the terminating
 *  null byte (\0), to the buffer pointed to by dest
 *  @dest: copy source to this buffer
 *  @src: te source to copy
 *  Return: copy the original source to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
