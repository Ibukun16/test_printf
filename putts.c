#include "main.h"
/**
 * putts - A function that prints string
 * @s: The string
 *
 * Return: The the count of the string
 */
int putts(char *s)
{
	int n = 0;

	if (s)
	{
		while (s[n] != '\0')
		{
			write(1, &s[n], 1);
			n++;
		}
	}
	return (n);
}
