/*
 * Lab1.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Reem Salah Shehab
 */


// Lab1: Calculate the factorial of specific number
  
#include<stdio.h>

int factorial(int n);
void main()
{
	int x;
	factorial(x);
	printf("Factorial(10) = %d\n\n",factorial(10));
	printf("Factorial(0) = %d\n\n",factorial(0));
	printf("Factorial(5) = %d",factorial(5));
}
int factorial(int n)
{
	int fac=1;
	for(int i = n; i >= 1; i--)
	{
		fac=fac*i;
	}
	return fac;
}

