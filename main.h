#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct
{
	char *spec;
	int (*handler)(va_list);
} fmt;

int _putchar(char c);

int print_char(va_list);
int _printf(const char *format, ...);

#endif /* MAIN_H */
