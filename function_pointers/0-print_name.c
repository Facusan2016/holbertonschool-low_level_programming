#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Locates a substring.
 * @name: Pointer to a String to be printed.
 * @f: Callback function.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name ==  NULL)
		return;

	f(name);
}
