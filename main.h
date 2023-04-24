#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
void process_format(va_list args, const char **format, int *count);
int _printf(const char *format, ...);
int _putchar(char c);
void print_percent(va_list args, int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
void print_integer(va_list args, int *count);
#endif
