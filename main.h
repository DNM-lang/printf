#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int _printf_string(char *s);
int _printf_int(int num);
int print_i(va_list args);
int print_d(va_list args);
int print_perc(void);
int _strlen(char *str);
int _strlenc(const char *str);
int print_s(va_list d);

#endif
