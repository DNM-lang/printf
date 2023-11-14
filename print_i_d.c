#include "main.h"
#include <stdarg.h>
/**
 * _printf_i_d - prints the charscters
 * @format: pointer to the elements.
 * Return: printed charscter
 */
int _printf_i_d(const char *format, ...)
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
 * _printf_int - prints the d and i
 * @num: the number to be printed
 * Return: count
 */
int _printf_int(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	if (num / 10)
		count += _printf_int(num / 10);
	_putchar(num % 10 + '0');
	return (count + 1);
}
