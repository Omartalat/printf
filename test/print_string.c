#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 ** print_string - writes the character c to stdout
 ** @s: The string to print
 **
 ** Return: 1.
 **/
int print_string(va_list parg)
{
	char *my_string;
	int  i = 0, co = 0;

	my_string = va_arg(parg, char *);
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
		co++;
	}
	return (co);
}
