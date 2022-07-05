#include <stdarg.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
* get_op_func - determines format specifier
* @format: format string
*
* Return: count
*/

int (*get_op_func(const char *format))(va_list)
{
	op_t func_type[] = {
		{"c", op_char},
		{"s", op_string},
		{NULL, NULL},
	};

	int i = 0;

	while (func_type[i].specifiers != NULL)
	{
		if (*func_type[i].specifiers == *format)
			break;

		i++;
	}
	return (func_type[i].f);
}
