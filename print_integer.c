#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/**
 * print_integer - prints an integer
 * @args: list of arguments
 * @count: pointer to the character count
 * Return: void
 */
void print_integer(va_list args, int *count)
{
int n = va_arg(args, int);
int i;
char *buffer;
int len = 0;
if (n == 0)
{
buffer = malloc(sizeof(char));
if (buffer == NULL)
{
return;
}
buffer[len++] = '0';
}
else
{
int negative = 0;
if (n < 0)
{
negative = 1;
n = -n;
}
while (n > 0)
{
buffer = realloc(buffer, (len + 1) * sizeof(char)); 
if (buffer == NULL)
{
free(buffer);
return;
}
buffer[len++] = n % 10 + '0';
n /= 10;
(*count)++;
}
if (negative)
{
buffer = realloc(buffer, (len + 1) * sizeof(char)); 
if (buffer == NULL)
{
free(buffer);
return;
}
buffer[len++] = '-';
}
}

    for (i = len - 1; i >= 0; i--)
    {
        _putchar(buffer[i]);
    }

    free(buffer);
}

