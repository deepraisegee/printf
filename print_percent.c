#include <stdarg.h>
#include "main.h"

/**
  * print_percent - print percent sign
  * @args: argument list
  *
  * Return: 1
  */
int print_percent(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}
