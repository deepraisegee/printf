#include <stdarg.h>
#include "main.h"

/**
  * print_int - prints integer
  * @n: integer to print
  *
  * Return: total character of the integer
  */
static int print_int(int n)
{
	int i;
	static int j = 1;

	if (n > 9)
	{
		i = n / 10;
		n = n - (10 * i);
		j++;
		print_int(i);
	}
	_putchar('0' + n);

	return (j - 1);
}

/**
  * print_digit - print formatted digit
  * @args: argument list
  *
  * Return: number of digit character
  */
int print_digit(va_list args)
{
	int d = va_arg(args, int);

	if (d < 0)
	{
		_putchar('-');
		return (1 + (print_int(-1 * d)));
	}

	return (print_int(d));
}
