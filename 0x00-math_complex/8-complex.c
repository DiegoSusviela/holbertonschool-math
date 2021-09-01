#include "holberton.h"

/**
 * complex_from_mod_arg - imprime
 * @m: some number idk tbf
 * @arg: dlkandla
 * @c3: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
