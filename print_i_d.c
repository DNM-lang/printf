#include "main.h"
#include <stdarg.h>

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
