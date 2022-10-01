/*
 * Ex_4.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */


#include <stdio.h>
void main()
{
	float n1,n2,product;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&n1,&n2);
	product=n1 * n2;
	printf("Sum: %f",product);
}

