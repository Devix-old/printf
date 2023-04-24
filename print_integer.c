#include "main.h"
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
  char buffer[32];
  int len = 0;
  if (n == 0)
  {
    _putchar('0');
    (*count)++;
    return;
  }
  else
  {
    int negative = 0;
    unsigned int num;
    if (n < 0)
    {
      negative = 1;
      num = (unsigned int)(-n);  // Cast to unsigned int to handle INT_MIN
    }
    else
    {
      num = (unsigned int)n;
    }
    while (num > 0)
    {
      buffer[len++] = num % 10 + '0';
      num /= 10;
      (*count)++;
    }
    if (negative)
    {
      buffer[len++] = '-';
    }
  }
  for (i = len - 1; i >= 0; i--)
  {
    _putchar(buffer[i]);
  }
}
