/** \file simple_math.h
	\brief a toy example of a header
	\author Edoardo Oldrini
*/
#ifndef _SIMPLEMATH_
#define _SIMPLEMATH_

typedef struct complex_n{
	float re;
	float imm;
} complex;



//somma: INPUT: 2 numeri complessi; Output: 1 numero complesso
int sum(int a, int b);
complex sum_cmplx(complex a, complex b);

//media: INPUT: 2 numeri complessi; Output: 1 comlesso.
float avg(int a, int b);
complex avg_cmplx(complex a, complex b);
#endif