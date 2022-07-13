#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _print(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
 * struct func - struct for specifier to print
 * @t: charecter to compare
 * @f: function to handle printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

#endif
