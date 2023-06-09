#include "main.h"

/**
 * rev - Reverse a string and print it to standard output
 * @args: A va_list of arguments
 * @count: A pointer to an integer to store the count of characters printed
 *
 * Return: None
 */
void rev(va_list args, int *count)
{
	int len, i;
	char *s = va_arg(args, char *);

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		(*count)++;
		_putchar(s[i]);
	}
}
