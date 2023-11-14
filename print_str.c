#include <stdarg.h>
#include "main.h"

/**
  * print_str - outputs string from formatted string
  * @s: string to be output
  *
  * Return: total number of character in the string
  */
int print_str(va_list s)
{
	int count = 0;
	char *str = va_arg(s, char *);

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
