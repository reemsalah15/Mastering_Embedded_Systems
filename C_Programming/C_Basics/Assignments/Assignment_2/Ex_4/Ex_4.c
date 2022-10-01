/*
 * Ex_4.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */


#include<stdio.h>
void main()
{
	float n;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&n);
	if(n > 0)
		printf("%0.2f is positive.",n);
	else if(n < 0)
		printf("%0.2f is negative.",n);
	else
		printf("You entered zero.");

}
