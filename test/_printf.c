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
	unsigned int i, c;
	va_list parg;

	va_start(parg, *format);
	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		i = 0;
		c = 0;
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				i++;
				c++;	
			}
			else
			{
				print_(format, i, parg);
				c += print_(format, i, parg);
				i +=2;
			}
		}
		return (c);
	}

	va_end(parg);
}
