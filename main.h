#ifndef MAIN_H
#define MAIN_H

typedef struct
{
	char *spec;
	int (*handler)(char);
} fmt;

int _putchar(char c);

int print_char(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
