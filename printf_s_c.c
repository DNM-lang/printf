#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - prints string, character and %
 * @format: pointer to location containing the element
 * Return: Return the c,s or %
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					printed_chars += _putchar(va_arg(args, int));
					break;
				case 's':
					printed_chars += printf_string(va_arg(args, char *));
					break;
				case '%':
					printed_chars += _putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed_chars += 2;
					break;
			}
		}
		else
		{
			printed_chars += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}

