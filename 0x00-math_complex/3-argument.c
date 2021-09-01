#include "holberton.h"
#include "2-modulus.c"

/**
 * argument - imprime
 * @c: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

double argument(complex c)
{
	return (asin(c.im / modulus(c)));
}
