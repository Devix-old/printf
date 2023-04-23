#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
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
c = va_arg(args, int);
_putchar(c);
format++;
count++;
}
if (*format == 's')
{
format++;
s = va_arg(args, char *);
if (s == NULL)
{
write(1, "(null)", 6);
}
else
{
while (*s != '\0')
{
_putchar(*s);
s++;
count++;
}
}
}
}
_putchar(*format);
format++;
count++;
}
va_end(args);
return (count);
}
