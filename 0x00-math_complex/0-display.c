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
			printf("%fi", c.im);
		else
			printf("%f", c.im);
	else
		printf("%f + %fi", c.re, c.im);
}
