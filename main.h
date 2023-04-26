#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
void rev(va_list args, int *count);
int len_num(int num);
void hexa(va_list args, int *count);
void convert_to_binary(va_list args, int *count);
int handle_space_case(const char **format, int *count);
void process_format(va_list args, const char **format, int *count);
int _printf(const char *format, ...);
int _putchar(char c);
void print_percent(va_list args, int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
void print_integer(va_list args, int *count);
void print_unsigned_integer(va_list args, int *count);
void handle_octal(va_list args, int *count);
#endif
