#include "main.h"

/**
 * print_cent - print charecter % to stdout
 * @args: variadic parameter
 *
 * Return: number of charecters printed
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
