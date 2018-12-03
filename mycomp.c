#include <stdio.h>
#include "complex.h"

/* 
This file contains the main() fuction, the interactive actions functions with the users, and the declaration of the variables
*/

int main () {

	complex A;	/* Declaration of the complex numbers */
	complex B;
	complex C;
	complex D;
	complex E;
	complex F;
	
	complex *pointerToA = &A;	/* Declaration and initialization of the pointers on the complex */
	complex *pointerToB = &B;
	complex *pointerToC = &C;
	complex *pointerToD = &D;
	complex *pointerToE = &E;
	complex *pointerToF = &F;

	read_comp (pointerToA, 'A', 0, 0);	/* Initialization of the numbers with 0 and 0 */
	read_comp (pointerToB, 'B', -2.454545, 0); /* probleme decimales */
	read_comp (pointerToC, 'C', -3, -1);
	read_comp (pointerToD, 'D', 6, -4);
	read_comp (pointerToE, 'E', 0, 0);
	read_comp (pointerToF, 'F', 0, 0);	
	
	
	print_comp (pointerToC);
	print_comp (pointerToD);
	add_comp (pointerToC, pointerToD);
	sub_comp (pointerToC, pointerToD);
	mult_comp_real (pointerToC, 2.0);
	mult_comp_img (pointerToD, 2);
	mult_comp_img (pointerToD, -2);

	return 0;
}

