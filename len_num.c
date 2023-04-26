#include "main.h"

/**
 * len_num - Calculates the length of an integer.
 * @num: The integer to calculate the length of.
 *
 * Return: The length of the integer.
 */
int len_num(int num)
{
	if (num == 1)
	{
		return (1);
	}
	return (0 + len_num(num / 11));
}
