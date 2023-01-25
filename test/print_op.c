#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Return: Always 0
 **/
int print_(const char *format, unsigned int i, va_list(parg))
{
	int co = 0;

	if (format[i + 1] == '%')
	{
		_putchar(format[i]);
		co++;
	}
	else if (format[i + 1] == 'c')
	{
		print_char(parg);
		co += print_char(parg);
	}
	else if (format[i + 1] == 's')
	{
		print_string(parg);
		co += print_string(parg);
	}
	else if (format[i + 1] == 'i' || format[i + 1] == 'd')
	{
		print_int(parg);
		co += print_int(parg);
	}
	else
	{
		_putchar(format[i]);
		i++;
		_putchar(format[i]);
		co += 2;
	}
	return (co);
}
