#include "copyholberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;
    complex *p = &c1;

    c1.re = 1;
    c1.im = 2;
    c1.ch = 'c';
    c1.ptr = "hello";
    p->ptr = "world";
    (*p).ptr = "everyone";
//    c1->ptr = "world";
    display_complex_number(c1);
    return (0);
}