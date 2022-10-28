/*
 * Ex4.c
 *
 *  Created on: Oct 28, 2022
 *      Author: Reem Salah Shehab
 */

// EX4: C program to calculate the power of a number using recursion 

#include<stdio.h>

int power(int base,int powNum);

void main()
{
	int bn,pn;
	printf("Enter base number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&bn);
	printf("Enter power number(positive integer): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&pn);
	printf("%d^%d = %d",bn,pn,power(bn,pn));
}

int power(int base,int powNum)
{
	if(powNum!=0)
		return base*power(base,powNum-1);
	else
		return 1;
}

