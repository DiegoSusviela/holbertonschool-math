#include "holberton.h"
#include "6-multiplication"
#include "1-conjugate.c"

/**
 * add_node - imprime
 * @head: some number idk tbf
 * @str: dlkandla
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
