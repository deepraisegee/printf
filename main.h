#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
  * struct fmt - format type for _prinft
  * @spec: specifier
  * @handler: correspond funtion
  */
typedef struct fmt
{
	char *spec;
	int (*handler)(va_list);
} fmt;

int _putchar(char c);

int print_char(va_list);
int print_percent(va_list);
int print_str(va_list);
int _printf(const char *format, ...);

#endif /* MAIN_H */
