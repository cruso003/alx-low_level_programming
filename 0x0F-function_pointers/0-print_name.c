#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: A pointer to a null-terminated string containing printed name
 * @f: a function pointer pointing to a function capable of printing a char
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
