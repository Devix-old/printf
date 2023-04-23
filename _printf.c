#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
					_putchar(c);
					printed_chars++;
					break;
				case 's':
					printed_chars += _print_str(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					printed_chars++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed_chars += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}

	va_end(args);

	return (printed_chars);
}

/**
 * _print_str - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
 */
int _print_str(char *str)
{
	int i;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}

