#include "main.h"

/**
  * _printf - produces output according to a format.
  * @format: char pointer
  *
  * Return: an integer
  */
int _printf(const char *format, ...)
{
	if (!format)
		return (-1);
	va_list(args);
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					_putchar('%');
					break;
				case 'c':
					handle_char(args);
					break;
				case 's':
					handle_string(args);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
}
