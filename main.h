#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strncpy(char *dest, char *src);
int _putchar(char c);
int op_char(char c);
int op_percent(char c);
int op_string(char *s);

typedef struct specifiers
{
	char *specifiers;
	int (*f)(va_list args);
} op_t;

#endif /* MAIN_H */
