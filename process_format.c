#include "main.h"
#include <stdarg.h>
void process_format(va_list args, const char **format, int *count)
{
  switch (**format)
  {
  case 'c':
    print_char(args, count);
    break;
  case 's':
    print_string(args, count);
    break;
  case 'd':
  case 'i':
    print_integer(args, count);
    break;
  case 'b':
    convert_to_binary(args, count);
    break;
  case '%':
    print_percent(args, count);
    break;
  default:
    _putchar('%');
    _putchar(**format);
    (*count) += 2;
    break;
  }
}
