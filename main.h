#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_string(char *s);
int _printf_int(int num);
int print_perc(void);
int _printf_i_d(const char *format, ...);
int print_c(va_list val);
#endif
