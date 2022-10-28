/*
 * Ex2.c
 *
 *  Created on: Oct 28, 2022
 *      Author: Reem Salah Shehab
 */

// EX_2:C Program to calculate factorial of anumber using recursion 

#include<stdio.h>

int fac(int n);


void main(void)
{
	int n;
	printf("Enter an positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,fac(n));
}

int fac(int n)
{
	if(n!=1)
	  return n*fac(n-1);
}