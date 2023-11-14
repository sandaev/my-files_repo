#include "main.h"
/**
 * print_bin - Prints an unsigned int as binary
 * @nums: Number
 *
 * Return: Length of bits
 */
int print_bin(unsigned int nums)
{
	unsigned int num;
	int i, j;
	int bits[64];

	/*num = va_arg(nums, unsigned int);*/
	num = nums;
	i = 0;
	while (num / 2)
	{
		bits[i] = num % 2;
		num /= 2;
		i++;
	}
	bits[i] = 1;

	for (j = i; j >= 0; j--)
	{
		/*x = bits[j];*/
		_putchar('0' + bits[j]);
	}
	return (++i);
}

/**
 * main - Tests code
 *
 * Return: Always 0
 */

int main(void)
{
	int len;

	len = print_bin(72);
	_putchar('\n');
	_putchar('0' + len);
	_putchar('\n');

	

	len = print_bin(256);
	_putchar('\n');
	_putchar('0' + len);
	_putchar('\n');

	return (0);
}
