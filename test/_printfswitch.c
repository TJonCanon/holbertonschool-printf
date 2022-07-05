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
	va_list lst;
	int i = 0, j = 0;
	char buff[100] = {0};
	char *str_arg;

	va_start(lst, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buff[j] = (char)va_arg(lst, int);
					j++;
					break;
				case 's':
					str_arg = va_arg(lst, char *);
					_strncpy(&buff[j], str_arg);
					j += _strlen(str_arg);
					break;
				case '%':
					buff[j] = '%';
					j++;
					break;
				default:
					buff[j] = '%';
					j++;
					buff[j] = format[i];
					continue;
			}
		}
		else
		{
			buff[j] = format[i];
			j++;
		}
		i++;
	}
	for (i = 0; i <= j; i++)
	{
		_putchar(buff[i]);
	}
	va_end(lst);
	return (j);
}
