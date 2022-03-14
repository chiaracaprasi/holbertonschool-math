#include <stdio.h>
#include "copyholberton.h"
#include <stdlib.h>

/**
 *void display_complex_number - displays the complex numbers
 * @c: srtuct to display
 *
 * Return: nothing
 */
void display_complex_number(complex c)
{
	printf("%.0f + %.0fi + %c + %s\n", c.re, c.im, c.ch, c.ptr);
//	printf("p->ptr is: %s\n", p->ptr);

}
