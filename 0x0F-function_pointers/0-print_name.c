#include "function_pointers.h"

/**
 * print_name - A func thet prints a name
 *
 * @name: the string pointer
 * @f: function pointer that takes a string arg
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
