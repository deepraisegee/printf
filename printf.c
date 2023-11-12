#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
  * print_fmt - get a function of the specifier provided
  * @spec: specifier
  *
  * Return: function to the format specifier
  */
int (*print_fmt(char spec))(char)
{
	int i;
	fmt f_specs[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	for (i = 0; f_specs[i].spec; i++)
	{
		if (spec == *f_specs[i].spec)
			return (*f_specs[i].handler);
	}

	return (NULL);
}

/**
  * _printf - produces output according to a format.
  * @format: chraracter string
  *
  * Return: total number of character.
  */
int _printf(const char *format, ...)
{
	int i;
	int (*func)(char);
	va_list args;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			func = print_fmt(format[i + 1]);
			if (func == NULL)
				continue;
			// func(va_arg(args, int));
		}
		_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (i - 1);
}
