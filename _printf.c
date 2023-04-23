#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
int c, count;
char *s;
va_list args;
count = 0;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
c = va_arg(args, char);
_putchar(c);
format++;
count++;
}
if (*format == 's')
{
format++;
s = va_arg(args, char *);
while (*s != '\0')
{
_putchar(*s);
s++;
count++;
}
}
if (*s !=)
}
_putchar(*format);
format++;
count++;
}
va_end(args);
return (count);
}
