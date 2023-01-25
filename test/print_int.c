#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 ** print_int - function that prints an integer
 ** @parg: integer to print
 ** Descriptions: prints digit with _putchar
 ** Return: size the output text
 **/
int print_int(va_list parg)
{
	int n, num, x , i, p, len, digit, co = 0;

	n = va_arg(parg, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			co++;
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
			co++;
		}
	}
	else
	{
		_putchar('0');
		co++;
	}
	return (co);
}
