#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int _printf_string(char *s);
int print_i(va_list args);
int print_d(va_list args);

#endif
