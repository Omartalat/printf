#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 ** print_char - writes the character c to stdout
 ** @parg: The character to print
 **
 ** Return: 1.
 **/
int print_char(va_list parg)
{
	unsigned char car;
	unsigned int co = 0;

	car = va_arg(parg, int);
	_putchar(car);
	return (co++);
}
