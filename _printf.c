#include <stdarg.h>
#include <unistd.h>
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
if (format == NULL)
{
return (NULL);
}
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
c = va_arg(args, int);
write(1, &c, 1);
format++;
count++;
}
if (*format == 's')
{
format++;
s = va_arg(args, char *);
while (*s != '\0')
{
write(1, s, 1);
s++;
count++;
}
}
}
write(1, format, 1);
format++;
count++;
}
va_end(args);
return (count);
}
