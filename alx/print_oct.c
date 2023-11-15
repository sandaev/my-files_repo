#include "main.h"

/**
 * print_oct - Prints the octal representation of a number
 *
 * @nums: Number
 *
 * Return: Number of digits
 */

int print_oct(va_list nums)
{
	unsigned int num = va_arg(nums, unsigned int);
	int i, j;
	int octs[64];

	i = 0;
	while (num / 8)
	{
		octs[i] = num % 8;
		num /= 8;
		i++;
	}
	octs[i] = num;

	for (j = i; j >= 0; j--)
	{
		_putchar('0' + octs[j]);
	}

	return (++i);
}

/**
 * print_octf - Prints the octal representation of a number preceded with 0
 *
 * @nums: Number
 *
 * Return: Number of digits
 */

int print_octf(va_list nums)
{
	unsigned int num = va_arg(nums, unsigned int);
	int i, j;
	int octs[64];

	i = 0;
	while (num / 8)
	{
		octs[i] = num % 8;
		num /= 8;
		i++;
	}
	octs[i] = num;

	_putchar('0');
	for (j = i; j >= 0; j--)
	{
		_putchar('0' + octs[j]);
	}

	return (++i);
}
