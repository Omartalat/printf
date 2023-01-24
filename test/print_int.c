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
	int n, num, x , i, p, len, digit;

	n = va_arg(parg, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		num = n;
		len = -1;
		x = 1;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		for (i = 1; i <= len; i++)
		{
			x *= 10;
		}
		for (p = 0; p <= len; p++)
		{
			digit = n / x;
			if (n < 0)
			{
				_putchar((digit * -1) + 48);
			}
			else
			{
				_putchar(digit + '0');
			}
			n -= digit * x;
			x /= 10;
		}
	}
	else
	{
		_putchar('0');
	}
}
