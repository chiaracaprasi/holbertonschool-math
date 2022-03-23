#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *void conjugate - displays the complex numbers
 * @c: srtuct to display
 *
 * Return: nothing
 */
complex conjugate(complex c)
{
	c.im *= -1;

	return(c);
}
