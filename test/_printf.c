#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 ** main - Entry point
 **
 ** Return: Always 0
 **/
int _printf(const char *format, ...)
{
	unsigned int index, count;
	va_list parg;

	va_start(parg, *format);
	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		index = 0;
		count = 0;
		while (format[index] != '\0')
		{
			if (format[index] != '%')
			{
				_putchar(format[index]);
				index++;
				count++;
			}
			else
			{
				if (format[index + 1] == '%')
				{
					_putchar(format[index]);
					index++;
					count++;
					_putchar(format[index + 1]);
				}
				else if (format[index + 1] == 'c')
				{
					print_char(parg);
				}
				else if (format[index + 1] == 's')
				{
					print_string(parg);
				}
				else if (format[index + 1] == 'i')
				{
					print_int(parg);
				}
				index += 2;
				count += 2;
			}
		}
		return (count);
	}
}
