#include <stdarg.h>
#include "main.h"

/**
* get_op_func - determines format specifier
* @format: format string
* @args: arguments
*
* Return: count
*/

int get_op_func(char format, va_list args)
{
	op_t func_type[] = {
		{"c", op_char},
		{"%", op_percent},
		{"s", op_string},
	};

	int i = 0, count = 0;

	while (func_type[i].specifiers)
	{
		if (*(func_type[i].specifiers == *format))
			count = func_type[i].f(args);

		i++;
	}
	return (count);
}
