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

if (c.re)
	printf("%.9g", c.re);

if (c.im > 0)
{
	if (c.re)
		printf(" + ");
	if (c.im != 1)
		printf("%.9gi\n", c.im);
	else
		printf("i\n");
}
else 
	if (c.im < 0)
	{
		if (c.re)
			printf(" - ");
		if (c.im != -1)
			printf("%.9gi\n", c.im * (-1));
		else
			printf("i\n");
	}
	else
		printf("\n");
}
