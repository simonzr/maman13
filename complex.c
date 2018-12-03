#include <stdio.h>
#include <math.h>
#include "complex.h"

/* This file contains the functions of all the operations on complex numbers */

void print_comp (complex *num) {
	printf("\n%.1f ", (*num).realPart);
	
	if ((*num).imgPart < 0)
		printf("- (%.1f)i\n", -(*num).imgPart);
	else
		printf("+ (%.1f)i\n", (*num).imgPart);
}


void read_comp (complex *num, char name, float real, float img) {
	(*num).name = name;
	(*num).realPart = real;
	(*num).imgPart = img;
}


void add_comp (complex *num1, complex *num2) {
	complex temp;
	float tempRealPart = (*num1).realPart + (*num2).realPart;
	float tempImgPart = (*num1).imgPart + (*num2).imgPart;
	
	read_comp (&temp, 'T', tempRealPart, tempImgPart);
	print_comp (&temp);
}


void sub_comp (complex *num1, complex *num2) {
	complex temp;
	float tempRealPart = (*num1).realPart - (*num2).realPart;
	float tempImgPart = (*num1).imgPart - (*num2).imgPart;
	
	read_comp (&temp, 'T', tempRealPart, tempImgPart);
	print_comp (&temp);
}


void mult_comp_real (complex *num, float realMultiplier) {
	complex temp;
	float tempRealPart = (*num).realPart * realMultiplier;
	float tempImgPart = (*num).imgPart * realMultiplier;
	
	read_comp (&temp, 'T', tempRealPart, tempImgPart);
	print_comp (&temp);
}


void mult_comp_img (complex *num, float imgMultiplier) {
	complex temp;
	float tempRealPart = -(*num).imgPart * imgMultiplier;
	float tempImgPart = (*num).realPart * imgMultiplier;
	
	read_comp (&temp, 'T', tempRealPart, tempImgPart);
	print_comp (&temp);
}


void mult_comp_comp () {

}


void abs_comp () {

}


void stop () {

}




