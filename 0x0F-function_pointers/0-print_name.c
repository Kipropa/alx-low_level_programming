#include <stdio.h>

/**
 * print_name - calls a function with a name parameter
 * @name: name to be passed to the function
 * @f: pointer to the function that will be called with name parameter
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
