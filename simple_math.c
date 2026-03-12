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
	return ((float) (sum (a,b)))/2;
}


