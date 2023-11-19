#include "main.h"
/**
 * _putchar - A function that print character
 * @c: The character to print
 *
 * Return: The printed character
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
