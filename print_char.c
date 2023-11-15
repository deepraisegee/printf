#include <stdarg.h>
#include "main.h"

/**
  * print_char - print a character
  * @args: argument list
  *
  * Return: number of char
  */
int print_char(va_list c)
{
<<<<<<< HEAD
=======
	char c;

	c = va_arg(args, int);
>>>>>>> c90fad4d300e5ba1fe37227aeb599a67e240f59c
	return (_putchar(c));
}
