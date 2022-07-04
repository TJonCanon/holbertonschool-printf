#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
* _printf - produces output according to a format
* @format: format string
*
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += get_op_func(format, args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
