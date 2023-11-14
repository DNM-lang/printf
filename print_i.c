#include "main.h"

/**
 * print_i - prints int
 * @args: argument to be printed
 * Return: i printed
 */

int print_i(va_list args)
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

	while (number != 0)
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
