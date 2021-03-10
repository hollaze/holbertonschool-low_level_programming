#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print a name
 *
 * @name: name to print
 * @f: parameter pointer to function returning char
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || !f)
		return;

	f(name);

}
