#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string to print
 * @...: variadic parameters (unknown)
 *
 * Return: number of charectors printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	f = format;
	int count = 0;
	int value = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count =  count + value;
				i = i + 2;
				continue;
			}
		}
	}

	return (count);
}
