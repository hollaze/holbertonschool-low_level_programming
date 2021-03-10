#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: name to print
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return (NULL);

	void (*f)(char *) = name;

}
