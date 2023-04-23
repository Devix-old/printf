#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
int _putchar(char c);
=======
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
>>>>>>> fec18d412ae4eebfca3a22d31519d40f50a864b1
int _printf(const char *format, ...);
int _putchar(char c);
void print_percent(va_list args, int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
void print_integer(va_list args, int *count);
#endif
