#include "main.h"
#include <string.h>

/**
 * print_integer - prints an integer
 * @args: list of arguments
 * @count: pointer to the character count
 *
 * Return: void
 */
void print_integer(va_list args, int *count)
{
	int n = va_arg(args, int);
	int i;
	char buffer[32];
	int len = 0;

	if (n == -2147483648)
	{
		strncpy(buffer, "-2147483648", sizeof(buffer));
		for (i = 0; i < 11; i++)
		{
			putchar(buffer[i]);
			(*count)++;
		}
		return;
	}

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		buffer[len++] = n % 10 + '0';
		n /= 10;
		(*count)++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
}


