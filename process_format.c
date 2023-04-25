#include "main.h"
#include <stdarg.h>

/**
 * process_format - Process the format specifier and call appropriate functions
 * @args: va_list containing the argument to print
 * @format: Pointer to the format specifier
 * @count: Pointer to the count of characters printed
 *
 * Return: void
 */
void process_format(va_list args, const char **format, int *count)
{
	switch (**format)
	{
	case 'c':
		print_char(args, count);
		break;
	case 's':
		print_string(args, count);
		break;
	case 'd':
	case 'i':
		print_integer(args, count);
		break;
	case 'b':
		convert_to_binary(args, count);
		break;
	case 'u':
		print_unsigned_integer(args, count);
		break;
	case 'o':
		handle_octal(args, count);
		break;
	case 'x':
	case 'X':
		hexa(args, count);
		break;
	case '%':
		(*count)++;
		_putchar('%');
		break;
	default:
		_putchar('%');
		_putchar(**format);
		(*count) += 2;
		break;
	}
}
