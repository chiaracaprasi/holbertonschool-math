#ifndef COPYHOLBERTON_H
#define COPYHOLBERTON_H

/**
 * struct complex - complex number
 * @re: real number
 * @im: imaginary number
 *
 * Description: Longer description
 */

typedef struct complex
{
	double re;
	double im;
	char ch;
	char *ptr;
} complex;

void display_complex_number(complex c);

#endif
