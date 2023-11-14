#include "main.h"

/**
 * print_s - string
 * @f: argument
 * Return: string length
 */

int print_s(va_list f)
{
	char *str;
	int i, length;

	str = va_arg(f, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		       _putchar(str[i]);
		return (length);
	}
}
