#include "holberton.h"

/**
 * add_node - imprime
 * @head: some number idk tbf
 * @str: dlkandla
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
