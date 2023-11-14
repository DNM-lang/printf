#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list val);
void print_buffer(char buffer[], int *buff_ind);

#endif
