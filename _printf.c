#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - prints the returned value
 * @format: pointer containing the values.
 * Return: values
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
				case 'd':
				case 'i':
					printed_chars += _printf_int(va_arg(args, int));
					break;
				case 'c':
					printed_chars += _putchar(va_arg(args, int));
					break;
				case 's':
					printed_chars += _printf_string(va_arg(args, char *));
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
/**
 * _printf_string - prints string
 * @s: pointer to string
 * Return: length of string
 */

int _printf_string(char *s)
{
	int count = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}
/**
 * print_c - prints chars
 * @val: argument
 * Return: i
 */
int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
/**
 * print_perc - % percentage printed
 * Return: i
 */
int print_perc(void)
{
	_putchar(37);
	return (1);
}

