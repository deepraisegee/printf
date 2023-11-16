#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
  * print_str - outputs string from formatted string
  * @args: argument list
  *
  * Return: total number of character in the string
  */
int print_str(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
