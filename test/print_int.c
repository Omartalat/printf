#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 ** print_int - function that prints an integer
 ** @parg: integer to print
 ** Descriptions: prints digit with _putchar
 ** Return: size the output text
 **/
void print_int(va_list parg)
{
	int n, num, x , i, p, len;

	n = va_arg(parg, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		num = n;
		len = 0;
		x = 1;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		for (i = 0; i < len; i++)
		{
			x *= 10;
		}
		for (p = 0; p < len; p++)
		{
			n /= x;
			_putchar('0' + n);
			x /= 10;
		}
	}
	else
	{
		_putchar('0');
	}
}
