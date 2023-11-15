#include "main.h"
#include <stdio.h>

/**
 * main - Tests code
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui;

	/**
	 * i = _printf("Sanni Ozigi. I am %i years old. in bits: %b\n", 35, 98);
	printf("%d\n", i);
	*/

	_printf("Character: [%c]\n", 'H');
	printf("Character: [%c]\n", 'H');

	_printf("String: [%s]\n", "I am a string !");
	printf("String: [%s]\n", "I am a string !");

	len = _printf("Percent: [%%]\n");
	len2 = printf("Percent: [%%]\n");

	_printf("Len: [%d]\n", len);
	printf("Len: [%d]\n", len2);
	
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned: [%u]\n", ui);
	printf("Unsigned: [%u]\n", ui);
	
	_printf("Length: [%d, %i]\n", len, len);
	printf("Length: [%d, %i]\n", len2, len2);

	_printf("Unsigned octal: [%o]\n", ui);
	printf("Unsigned octal: [%o]\n", ui);
	
	_printf("Unsigned hexadecimal: [%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal: [%x, %X]\n", ui, ui);

	return (0);
}
