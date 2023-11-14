#include <stdarg.h>
#include "main.h"

/**
  * print_char - print a character
  * @args: argument list
  *
  * Return: number of char
  */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}
