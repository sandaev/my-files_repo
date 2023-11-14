#include "main.h"

/**
 * _printf - Prints according to a format.
 * @format: Formated string
 *
 * Return: Length of format
 */
int _printf(const char *format, ...)
{
	int print_chrs, c;
	/* List of arguments */
	va_list args_list;

	print_chrs = 0;

	if (format == NULL)
	{
		return (-1);
	}
	/* I initial arguments */

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_chrs++;

		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else if (*format == 'c')
			{
				c = printchar(args_list);
				print_chrs += c;
			}
			else if (*format == 's')
			{
				c = printstr(args_list);
				print_chrs += c;
			}
			else if (*format == 'i')
			{
				c = print_int(args_list);
				print_chrs += c;
			}
			else if (*format == 'd')
			{
				c = print_dec(args_list);
				print_chrs += c;
			}
			else if (*format == 'b')
			{
				c = print_bin(args_list);
				print_chrs += c;
			}
			else if (*format == '%')
			{
				c = print_perc();
				print_chrs += c;
			}

		}
		format++;
	}
	va_end(args_list);

	return (print_chrs);
}
