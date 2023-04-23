#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - Print a single character
 * @args: va_list containing the argument to print
 * @count: Pointer to the count of characters printed
 *
 * Return: void
 */
void print_char(va_list args, int *count)
{
  int c = va_arg(args, int);
  _putchar(c);
  (*count)++;
}
