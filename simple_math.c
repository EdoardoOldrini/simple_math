/** \file simple_math.c
	\brief a toy example of implementation of integer math. operations
	\author Edoardo Oldrini
*/

#include "simple_math.h"
#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

float avg(int a, int b){
	return sum (a,b)/2;
}

complex sum_cmplx(complex a, complex b){
	float sum_re = a.re + b.re;
	float sum_imm= a.imm + b.imm;

	complex res;
	res.re = sum_re;
	res.imm = sum_imm;

	return res;
};

complex avg_cmplx(complex a, complex b){
	complex res = sum_cmplx(a,b);
	res.re = res.re/2;
	res.imm = res.imm/2;
	return res;
}



