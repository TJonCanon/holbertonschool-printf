#include <stdarg.h>
#include "main.h"

/**
* op_char - prints char to stdout
* @args: arguments
*
* Return: 1 (# of chars)
*/
int op_char(va_list args)
{
	{
		_putchar((char)va_arg(args, int));
		return (1);
	}
}

/**
* op_string - prints string to stdout
* @args: arguments
*
* Return: # of chars
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

/**
* op_decimal - prints integer to stdout
* @args: arguments
*
* Return: # of chars
*/

int op_decimal(va_list args)
{
	int n = va_arg(args, int);
	int m = n;
	int count = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		m = n;
		count++;
	}
	while (n / 10)
	{
		count++;
		n = n / 10;
	}

	decimal_helper(m);


	return (count);
}

/**
* decimal_helper - aids in op_decimal recursion
* @n: integer
*/

void decimal_helper(int n)
{
	unsigned int t = n;

	if (t / 10)
		decimal_helper(t / 10);

	_putchar(t % 10 + '0');
}
