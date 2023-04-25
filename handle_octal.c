#include "main.h"

void handle_octal(va_list args, int *count)
{
    int n = va_arg(args, int);
    char buffer[12];
    int len = 0;
    int i;

    if (n < 0)
    {
        return;
    }
    if (n == 0)
    {
        len = 1;
    }
    else
    {
        int temp = n;
        while (temp > 0)
        {
            len++;
            temp /= 8;
        }
    }

    for (i = len - 1; i >= 0; i--)
    {
        buffer[i] = (n % 8) + '0';
        n /= 8;
    }
    buffer[len] = '\0';

    for (i = 0; i < len; i++)
    {
        _putchar(buffer[i]);
        (*count)++;
    }
}