#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of input
 * @f:pointer function
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f)
		f(name);
}
