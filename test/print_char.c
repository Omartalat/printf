#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 ** print_char - writes the character c to stdout
 ** @parg: The character to print
 **
 ** Return: 1.
 **/
void print_char(va_list parg)
{
	unsigned char c;
	c = va_arg(parg, int);
	_putchar(c);
}
