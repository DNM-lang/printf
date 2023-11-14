#include "main.h"

/**
 * print_d - prnts dec
 * @args: arguments
 * Return: d
 */

int print_d(va_list args)
{
	int number = va_arg(args, int);
	int i = 0;
	int digit, exp = 1;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		i++;
	}
	while (number / 10 > 0)
	{
		exp = exp * 10;
		number = number / 10;
	}
	while (exp > 0)
	{
		digit = number / exp;
		_putchar(digit + '0');
		number = number % exp;
		exp = exp / 10;
		i++;
	}
	return (i);
}
