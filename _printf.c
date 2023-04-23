#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 * @...: variable number of arguments
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int write_chars = 0;
	char c;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					write_chars = write(1, &c, 1);
					break;
				case 's':
					write_chars = write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
					break;
				case '%':
					c = '%';
					write_chars = write(1, &c, 1);
					break;
				default:
					c = '%';
					write_chars = write(1, &c, 1);
					c = *format;
					write_chars += write(1, &c, 1);
					break;
			}
			if (write_chars == -1)
				return (-1);
			printed_chars += write_chars;
		}
		else
		{
			write_chars = write(1, format, 1);
			if (write_chars == -1)
				return (-1);
			printed_chars += write_chars;
		}
		format++;
	}

	va_end(args);

	return (printed_chars);
}

