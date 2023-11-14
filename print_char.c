#include <stdarg.h>
#include "main.h"

/**
  * print_char - print a character
  * @c: character to print
  *
  * Return: number of char
  */
int print_char(va_list c)
{
	return (_putchar(c));
}
