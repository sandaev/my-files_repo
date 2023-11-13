#include "main.h"
int main(void)
{
	int num = 12456789;
	int n;

	n = print_int(num);
	_putchar('\n');
	_putchar('0' + n);
	_putchar('\n');

	return (0);
}
