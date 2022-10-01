#include "main.h"
#include <stdio.h>

/**
 * main - print the number of rguments
 * @argc: argv size
 * @argv: pointer array of string
 * Return: 0 Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
