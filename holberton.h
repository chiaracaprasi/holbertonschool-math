#ifndef HOLBERTON_H
#define HOLBERTON_H

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
} complex;

void display_complex_number(complex c);

#endif
