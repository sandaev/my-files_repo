#include "main.h"

/**
 * digits - Returns the nunber of
 * digits in num
 * @num: Number
 *
 * Return: Integer
 */
int digits(int num)
{
	int c = 1;

	while (num /= 10)
		c++;
	return (c);
}

/**
 * _exp - Power of a number
 * @n: Number
 * @i: Index
 *
 * Return: Power
 */
int _exp(int n, int i)
{
	if (i == 0)
		return (1);
	return (n * _exp(n, --i));
}

/**
 * print_int - Prints a integer
 *
 * @nums: Number to print
 *
 * Return: Number of digits
 */
int print_int(va_list  nums)
{
	int num, idx, n, i;

	num = va_arg(nums, int);
	idx = digits(nums);
	i = idx;
	num = nums;
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}

	--i;
	while (i >= 0)
	{
		n = num;
		n /= _exp(10, i);
		_putchar('0' + (n % 10));
		i--;
	}

	return (idx);

}

/**
 * print_dec - Prints a decimal
 *
 * @nums: Number to print
 *
 * Return: Number of digits
 */
int print_dec(va_list  nums)
{
	int num, idx, n, i;

	num = va_arg(nums, int);
	idx = digits(nums);
	i = idx;
	num = nums;
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}

	--i;
	while (i >= 0)
	{
		n = num;
		n /= _exp(10, i);
		_putchar('0' + (n % 10));
		i--;
	}

	return (idx);

}
