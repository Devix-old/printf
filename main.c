#include "main.h"
int main()
{
	int num = INT_MIN;

	int len1, len2;
	len1 = _printf("%d\n", num);
	_printf("%d\n", len1);
	len2 = printf("%d\n", num);
	printf("%d\n", len2);
	return (0);
}
