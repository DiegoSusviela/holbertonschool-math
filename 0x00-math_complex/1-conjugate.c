#include "holberton.h"

/**
 * conjugate - imprime
 * @c: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

complex conjugate(complex c)
{
	complex conj;

	conj.re = c.re;
	conj.im = -c.im;
	return (conj);
}
