#include "function_pointers.h"

/**
 * print_name - print a name using a function call back
 * @name: pointer to the name to be printed
 * @f: function pointer to call back function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
