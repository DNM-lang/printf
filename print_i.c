#include "main.h"

/**
 * print_i - prints int
 * @args: argument to be printed
 * Return: i printed
 */

int print_i(va_list args)
{
	int a = va_arg(args, int);
	int number, lastd = number % 10, digit, powerten = 1;
	int i = 1;

	a = a / 10;
	number = a;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		lastd = -lastd;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			powerten = powerten * 10;
			number = number / 10;
		}
		number = a;
		while (powerten > 0)
		{
			digit = number / powerten;
			_putchar(digit + '0');
			number = number - (digit + powerten);
			powerten = powerten / 10;
			i++;
		}
	}
	_putchar(lastd + '0');
	return (i);
}
