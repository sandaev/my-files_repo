#include "main.h"

/**
 * printstr - Prints a string
 *
 * @str: String to print
 *
 * Return: Length of character of
 * str
 *
 */
int printstr(va_list str)
{
	char *st;
	int i, len;

	st = va_arg(str, char *);

	if (st == NULL)
	{
		st = "(null)";
		len = _strlen(st);
		for (i = 0; i < len; i++)
		{
			_putchar(st[i]);
		}
	}
	else
	{
		len = _strlen(st);
		for (i = 0; i < len; i++)
			_putchar(st[i]);
	}

	return (len);
}
