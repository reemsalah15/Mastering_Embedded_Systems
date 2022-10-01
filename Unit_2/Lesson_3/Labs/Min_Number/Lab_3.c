/*
 * Lab_3.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Reem Salah Shehab
 */

/*
 * Function: Calculate the minimum of two number by using Inline conditional operator
 */
#include<stdio.h>
void main()
{
	int n1,n2,min;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	min=(n1<n2)? n1:n2;
	printf("The minimum value is %d",min);
}

