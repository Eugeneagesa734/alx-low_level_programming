#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - using the pointer function to print name
 * @name: adding a string
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
