#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *void print_re - print real part of complet number
 * @re: real number
 *
 * Return: 0 for success
 */

int print_re(double re)
{
	printf("%.0f", re);
	return (0);
}

/**
 *void print_im - print imaginary part of complet number
 * @re: imaginary number
 *
 * Return: 0 for success
 */

int print_im(double im)
{
	if (im == 1)
	{
		printf("i");
	}
	if (im < 0)
	{
		im = im * -1;
		printf("-");
	}
	if (im > 0)
	{
		printf("+ ");
	}
	
	else
	{
		printf("%.0fi", im);
	}
}

/**
 *void display_complex_number - displays the complex numbers
 * @c: srtuct to display
 *
 * Return: nothing
 */
void display_complex_number(complex c)
{
	if (c.im == 0 && c.re == 0)
	{
		printf("0\n");
		return;
	}
	else
	{
		print_re(c.re);
		printf(" "); 
		print_im(c.im);
		printf("\n");
	}
			
}
