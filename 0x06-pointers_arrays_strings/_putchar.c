#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: 1 on success, -1 on error and errno is set approprietary
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
