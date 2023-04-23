#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int _putchar(char c);
void print_percent(va_list args, int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
#endif
