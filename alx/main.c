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

	return (0);
}
