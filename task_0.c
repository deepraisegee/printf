#include "main.h"

/**
  * handle_char - handle char in _printf
  * @args: va_arg
  *
  * Return: nothing
  */
void handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
}

/**
  * handle_string - handles string
  * @args: va_arg
  *
  * Return: nothing
  */
void handle_string(va_list args)
{
	char *str = va_arg(args, char*);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
