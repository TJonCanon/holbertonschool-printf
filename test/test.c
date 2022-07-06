#include <stdio.h>
#include "main.h"

int main(void)
{
	int len = 0, len2 = 0;

	len = _printf("%\n");
	len2 = printf("%\n");
	
	_printf("%d\n", len);
	printf("%d\n", len2);

	return(0);
}
