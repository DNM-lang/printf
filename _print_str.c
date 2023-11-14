#include "main.h"

/**
 * _strlen - lenght of string
 * @str: pointer
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - poinet to str
 * @str: pointer
 * Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
