#include <stdarg.h>
#include "main.h"

/**
* op_char - prints char to stdout
* @args: arguments
*
* Return: 1 (# of bytes)
*/
int op_char(va_list args)
{
	{
		_putchar(va_arg(args, int));
		return (1);
	}
}

/**
* op_percent - prints percent to stdout
* @args: arguments
*
* Return: 1 (# of bytes)
*/

int op_percent(va_list args)
{
	_putchar('%');
	return (1);
}

/**
* op_string - prints string to stdout
* @args: arguments
*
* Return: # of bytes
*/

int op_string(va_list args)
{
	char *string = va_arg(args, char *);
	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
