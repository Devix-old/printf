#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_string - Print a string
 * @args: va_list containing the argument to print
 * @count: Pointer to the count of characters printed
 *
 * Return: void
 */
void print_string(va_list args, int *count)
{
    char *s = va_arg(args, char *);
    if (s == NULL)
    {
        write(1, "(null)", 6);
        *count += 6;
    }
    else
    {
        while (*s != '\0')
        {
            _putchar(*s);
            s++;
            (*count)++;
        }
    }
}
