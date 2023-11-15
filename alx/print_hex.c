#include "main.h"

/**
 * print_hex - Prints the octal representation of a number
 *
 * @nums: Number
 *
 * Return: Number of digits
 */

int print_hex(va_list nums)
{
	unsigned int num = va_arg(nums, unsigned int);
	int i, j, z;
	int hex[64];

	i = 0;
	while (num / 16)
	{
		z = num % 16;
		if (z >= 0 || z <= 9)
			hex[i] = num % 16;
		else if (z == 10)
			hex[i] = 'a';
		else if (z == 11)
			hex[i] = 'b';
		else if (z == 12)
			hex[i] = 'c';
		else if (z == 13)
			hex[i] = 'd';
		else if (z == 14)
			hex[i] = 'e';
		else if (z == 15)
			hex[i] = 'f';
		num /= 16;
		i++;
	}
	hex[i] = num;

	for (j = i; j >= 0; j--)
	{
		if (hex[j] > ('0' + hex[j]))
				write(1, &hex[j], 1);
		else
			_putchar('0' + hex[j]);
	}

	return (++i);
}


/**
 * print_heX - Prints the octal representation of a number
 *
 * @nums: Number
 *
 * Return: Number of digits
 */

int print_heX(va_list nums)
{
	unsigned int num = va_arg(nums, unsigned int);
	int i, j, z;
	int hex[64];

	i = 0;
	while (num / 16)
	{
		z = num % 16;
		if (z >= 0 && z <= 9)
			hex[i] = num % 16;
		else if (z == 10)
			hex[i] = 'A';
		else if (z == 11)
			hex[i] = 'B';
		else if (z == 12)
			hex[i] = 'C';
		else if (z == 13)
			hex[i] = 'D';
		else if (z == 14)
			hex[i] = 'E';
		else if (z == 15)
			hex[i] = 'F';
		num /= 16;
		i++;
	}
	hex[i] = num;

	for (j = i; j >= 0; j--)
	{
		if (hex[j] > ('0' + hex[j]))
			write (1, &hex[j], 1);
		else
			_putchar('0' + hex[j]);
	}

	return (++i);
}
/**
 * print_hexf - Prints the octal representation of a number preceded with 0
 *
 * @nums: Number
 *
 * Return: Number of digits
 */

int print_hexf(va_list nums)
{
	
	unsigned int num = va_arg(nums, unsigned int);
	int i, j, z;
	int hex[64];

	i = 0;
	_putchar('0');
	_putchar('x');
	i += 2;
	while (num / 16)
	{
		z = num % 16;
		if (z >= 0 && z <= 9)
			hex[i] = num % 16;
		else if (z == 10)
			hex[i] = 'a';
		else if (z == 11)
			hex[i] = 'b';
		else if (z == 12)
			hex[i] = 'c';
		else if (z == 13)
			hex[i] = 'd';
		else if (z == 14)
			hex[i] = 'e';
		else if (z == 15)
			hex[i] = 'f';
		num /= 16;
		i++;
	}
	hex[i] = num;

	for (j = i; j >= 0; j--)
	{
		_putchar('0' + hex[j]);
	}

	return (++i);
}
