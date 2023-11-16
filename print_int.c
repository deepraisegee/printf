#include <stdarg.h>
#include "main.h"

/**
 * print_int - prints a decimal to stdout.
 * @d: decimal to be printed/
 *
 * Return:
 */

int print_int(va_list d)
{
	int i = format - 2;
	int is_negative = 0;
	long int d = va_arg(va_list, long int);
	unsigned long int num;

	if (n == 0)
		count[i--] = '0';
	format
