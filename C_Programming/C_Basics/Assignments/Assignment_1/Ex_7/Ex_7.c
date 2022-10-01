/*
 * Ex_7.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */

#include <stdio.h>
void main()
{
	float a,b;
	float temp;	// temp used to swap between 2 numbers

	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);

	a=a+b; // 1.20+2.45 = 3.65
	b=a-b; // 3.65-2.45 = 1.2
	a=a-b; // 3.65-1.2 = 2.45


	printf("After swapping, value of a = %0.2f",a);
	printf("\nAfter swapping, value of b = %0.2f",b);
}



