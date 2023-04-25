#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_percent - Print a percent character
 * @args: va_list containing the argument to print
 * @count: Pointer to the count of characters printed
 *
 * Return: void
 */
void print_percent(va_list args, int *count)
{
    (void)args;
    _putchar('%');
    (*count)++;
}

