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
	int (*get_op_func_ptr)(va_list);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			get_op_func_ptr = get_op_func(&format[i]);
			if (get_op_func_ptr != NULL)
				count += get_op_func_ptr(args);
			else
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
				count = count + 2;
			}
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
