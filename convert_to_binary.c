#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * convert_to_binary - Convert decimal to binary and print
 * @args: va_list containing arguments
 * @count: pointer to count of characters printed
 *
 * Return: None
 */
void convert_to_binary(va_list args, int *count)
{
int binary[32];
int i = 0, j, decimal;
decimal = va_arg(args, int);
if (decimal < 0)
{
return;
}
while (decimal > 0)
{
binary[i] = decimal % 2;
decimal = decimal / 2;
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(binary[j] + '0');
(*count)++;
}
