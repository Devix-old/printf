#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
print_char(args, &count);
break;
case 's':
print_string(args, &count);
break;
case '%':
print_percent(args, &count);
break;
default:
_putchar('%');
_putchar(*format);
count += 2;
break;
}
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
