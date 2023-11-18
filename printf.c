#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
  * print_fmt - get a function of the specifier provided
  * @spec: specifier
  *
  * Return: function to the format specifier
  */
int (*print_fmt(char spec))(va_list)
{
	int i;
	fmt f_specs[] = {
		{"c", print_char},
		{"%", print_percent},
		{"s", print_str},
		{"d", print_digit},
		{"i", print_digit},
		{NULL, NULL}
	};

	for (i = 0; f_specs[i].spec; i++)
	{
		if (spec == f_specs[i].spec[0])
			return (f_specs[i].handler);
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
	int i, tracker;
	int count = 0;
	int (*func)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = 0;
	tracker = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			func = print_fmt(format[i + 1]);
			if (func != NULL)
			{
				count += func(args);
				i += 2;
				tracker += 2;
				continue;
			}

		}
		_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (count + (i - tracker));
}
