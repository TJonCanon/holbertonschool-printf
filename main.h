#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strncpy(char *dest, char *src);
int _putchar(char c);
int op_char(va_list args);
int op_string(va_list args);
int op_decimal(va_list args);
void decimal_helper(int n);
int (*get_op_func(const char *format))(va_list);

/**
 * struct specifiers - format specifiers & their functions
 * @specifiers: format specifiers
 * @f: function for specifier
 *
 * Description: This struct contains two members.
 * The first matches a format specifier for printf.
 * The second contains the name for the print function for that specifier.
 */
typedef struct specifiers
{
	char *specifiers;
	int (*f)(va_list args);
} op_t;

#endif /* MAIN_H */
