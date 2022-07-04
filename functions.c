int op_char(va_list args)
{
	{
		_putchar(va_args(args, int));
		return (1);
	}
}

int op_percent(va_list args)
{
	_putchar('%');
	return (1);
}

int op_string(va_list args)
{
	char *string = va_args(args, char *);
	int, i;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
