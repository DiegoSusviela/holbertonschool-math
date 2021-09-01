#include "holberton.h"

/**
 * modulus - imprime
 * @c: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

double modulus(complex c)
{
	return (sqrt((c.im * c.im) + (c.re * c.re)));
}
