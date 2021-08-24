#include "holberton.h"

/**
 * add_node - imprime
 * @head: some number idk tbf
 * @str: dlkandla
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

complex conjugate(complex c)
{
	complex conj;

	conj.re = c.re;
	conj.im = -conj.im;
	return (conj);
}
