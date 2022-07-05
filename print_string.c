#include <unistd.h>
void print_string(char str)
{
	write(1, &str, 5);
}


