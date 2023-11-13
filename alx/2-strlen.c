#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Pointer to char
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
		;
	}

	return (len);
}

/**
 * _strlenc - Finds the length of
 * string of type const char
 *
 * @s: String
 *
 * Return: Integer length of string
 */
int _strlenc(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0')
		len++;
	return (len);
}
