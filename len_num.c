#include "main.h"

/**
 * len_num - Calculates the length of an integer.
 * @num: The integer to calculate the length of.
 *
 * Return: The length of the integer.
 */
int len_num(int num)
{
	if (num == 0)
	{
		return (0);
	}
	return (1 + len_num(num / 10));
}
