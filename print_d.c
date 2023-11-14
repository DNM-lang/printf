#include "main.h"

/**
 * print_d - prnts dec
 * @args: arguments
 * Return: d
 */

int print_d(va_list args)
{
	int a = va_args(args, int);
	int number, lastd = number % 10, digit, powerten = 1;
	int i = 1;	

	a = a / 10;
	number = a;

	if (lastd < 0)
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
			number = number - (digit * powerten);
			powerten = powerten / 10;
			i++;
		}
	}
	_putchar(lastd +'0');
	return (i);
}
