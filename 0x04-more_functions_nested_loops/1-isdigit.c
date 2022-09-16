#include "main,h"
/**
 * _isdigit - checks for digits frm 0 to 9
 * @c: the variable to test
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
