#include "main.h"

/**
 * print_unsigned_integer - Print an unsigned integer
 * @args: Variable argument list
 * @count: Pointer to an integer
 *
 * Return: void
 */
void print_unsigned_integer(va_list args, int *count)
{
	long int n = va_arg(args, long int);
	char buffer[12];
	int k = 0;
	int i = 0;

	if (n < 0)
	{
		n = 4294961640;
	}

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}
	else
	{
		while (n > 0)
		{
			buffer[k++] = n % 10 + '0';
			n /= 10;
		}
	}

	for (i = k - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		(*count)++;
	}
}
