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
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
if (*(format + 1) == '\0' || *format == ' ')
{
return (-1);
}
format++;
if (*format == ' ')
{
while (*format == ' ')
{
if (*format++ == '\0')
return (-1);
}
}
process_format(args, &format, &count);
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
