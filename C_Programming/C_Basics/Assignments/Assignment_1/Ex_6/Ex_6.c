/*
 * Ex_6.c
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

	temp=a;
	a=b;
	b=temp;


	printf("After swapping, value of a = %0.2f",a);
	printf("\nAfter swapping, value of b = %0.2f",b);
}


