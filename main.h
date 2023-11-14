#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list val);
int print_i(va_list args);
int print_d(va_list args);

#endif
