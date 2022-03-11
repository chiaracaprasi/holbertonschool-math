#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *void display_complex_number - displays the complex numbers
 * @c: srtuct to display
 *
 * Return: nothing
 */
void display_complex_number(complex c)
{
	if (c.im != 0)
	{
		printf("%.0f + %.0fi\n", c.re, c.im);
	}
	else
	{
		printf("%.0f\n", c.re);
	}
}
