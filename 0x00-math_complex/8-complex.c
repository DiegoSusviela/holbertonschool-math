#include "holberton.h"

/**
 * add_node - imprime
 * @head: some number idk tbf
 * @str: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
