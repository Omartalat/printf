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
				if (format[index] != '\0')
				{
					return (count);
				}
				else if (format[index + 1] == '%')
				{
					_putchar(format[index]);
					index++;
					count++;
					_putchar(format[index + 1]);
				}
				else if (format[index + 1] == 'c')
				{
					_putchar(va_arg(parg, int));
				}
				else if (format[index + 1] == 's')
				{
					print_string(parg);
				}
				else if (format[index + 1] == 'i')
				{
					_putchar(va_arg(parg, int));
				}
				index++;
				count++;
			}
		}
		return (count);
	}
}
