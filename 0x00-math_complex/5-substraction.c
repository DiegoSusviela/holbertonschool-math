#include "holberton.h"

/**
 * substraction - imprime
 * @c1: some number idk tbf
 * @c2: dlkandla
 * @c3: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c2.re - c1.re;
	c3->im = c2.im - c1.im;
}
