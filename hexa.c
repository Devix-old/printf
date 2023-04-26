#include "main.h"

/**
 * hexa - Handles the 'X' and 'x' conversion specifiers.
 * @args: The va_list containing the variadic arguments.
 * @count: A pointer to the count of characters printed.
 *
 * Return: None
 */
void hexa(va_list args, int *count)
{
	int n = va_arg(args, int), temp = n, len = 0;
	char *s, *b = "abcdef";
	int i;

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}
	if (n < 0)
		return;
	while (temp > 0)
	{
		temp /= 16;
		len++;
	}
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return;
	s[len] = '\0';
	for (i = len - 1; i >= 0; i--)
	{
		if (n % 16 > 9)
		{
			s[i] = b[(n % 16) - 10];
		}
		else
		{
			s[i] = (n % 16) + '0';
		}
		n /= 16;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
		(*count)++;
	}
	free(s);
}
