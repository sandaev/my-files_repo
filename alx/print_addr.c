#include <stdio.h>

/**
 * print_addr - Handles p specifier as
 * in the case of printf. Prints
 * address of
 *
 * @nums: Va_list argument
 *
 * Return: Lenth of adress
 */
int print_hex(unsigned long int);
int print_addr(void *ptr)
{
	unsigned long int a;
	char *s = "null";
	int i = 0;

	if (ptr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchar(s[i]);
		}
		return (i);
	}

	putchar('0');
	putchar('x');
	i += 2;
	a = (unsigned long int)ptr;
	i += print_hex(a);

	return (i);
}

int main(void)
{
	void *adr;

	printf("%i\n", print_addr(adr));

	return (0);
}
