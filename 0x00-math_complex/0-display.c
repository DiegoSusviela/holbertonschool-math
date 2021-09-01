#include "holberton.h"

/**
 * display_complex_number - imprime
 * @c: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void display_complex_number(complex c)
{
	if (!c.im || !c.re)
		if (c.im)
			printf("%gi\n", c.im);
		else
			printf("%g\n", c.re);
	else
		printf("%g + %gi\n", c.re, c.im);
}
