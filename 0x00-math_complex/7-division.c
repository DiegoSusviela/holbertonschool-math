#include "holberton.h"
#include "6-multiplication.c"
#include "1-conjugate.c"

/**
 * division - imprime
 * @c1: some number idk tbf
 * @c2: dlkandla
 * @c3: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void division(complex c1, complex c2, complex *c3)
{
	double denom = (pow(c2.re, 2.0) + pow(c2.im, 2.0));

	multiplication(c1, conjugate(c2), c3);
	c3->re =  c3->re / denom;
	c3->im =  c3->im / denom;
}
