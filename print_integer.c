#include "main.h"
#include <stdarg.h>
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
char buffer[12];
int len = 0;
if (n == 0)
{
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
buffer[len++] = n % 10 + '0';
n /= 10;
}
if (negative)
{
buffer[len++] = '-';
}
}
for (i = len - 1; i >= 0; i--)
{
_putchar(buffer[i]);
(*count)++;
}
}
